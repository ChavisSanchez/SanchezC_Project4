/******************************************
Chavis Sanchez
permutationgenerator.hpp
Project 4

Class file for PermutationGenerator class
******************************************/

#include "permutationgenerator.hpp"

PermutationGenerator::PermutationGenerator(std::vector<double> items)
{
    this->items = items;
}

std::vector<double> PermutationGenerator::permutate()
{
    int size = items.size();
    int m, k, p, q;

    m = size - 2;
    while(items[m] > items[m+1])
    {
        m = m - 1;
    }

    k = size - 1;
    while(items[m] > items[k])
    {
        k = k - 1;
    }

    swapElements(m, k);

    p = m + 1;
    q = size - 1;
    while(p < q)
    {
        swapElements(p, q);
        p++;
        q--;
    }
    
    PermutationGenerator(this->items);

    return items;
}

void PermutationGenerator::swapElements(int x, int y)
{
   double temp = this->items[x];
   this->items[x] = this->items[y];
   this->items[y] = temp;
}

std::vector<double> PermutationGenerator::getItems()
{
    return this->items;
}

int PermutationGenerator::factorial(int f)
{
    if(f == 0 || f == 1)
    {
        return 1;
    }
    return f * factorial(f - 1);
}
