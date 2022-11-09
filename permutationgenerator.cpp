/******************************************
Chavis Sanchez
permutationgenerator.hpp
Project 4

Class file for PermutationGenerator class
******************************************/

#include "permutationgenerator.hpp"

PermutationGenerator::PermutationGenerator()
{
    
}

std::vector<double> PermutationGenerator::permutate(std::vector<double> s)
{
    int size = s.size();
    int m, k, p, q;

    m = size - 1;
    while(s[m] > s[m+1])
    {
        m = m - 1;
    }

    k = size - 1;
    while(s[m] > s[k])
    {
        k = k - 1;
    }

    double temp1 = s[m];
    s[m] = s[k];
    s[k] = temp1;

    p = m + 1;
    q = size - 1;
    while(p < q)
    {
        double temp2 = s[p];
        s[p] = s[q];
        s[q] = temp2;
    }
    
    for(int i = 0; i < s.size(); i++)
    {
        std::cout << s[i] << " ";
    }
    std::cout << std::endl;

    return s;
}

std::vector<double> PermutationGenerator::arrayToVector(double items[])
{
    std::vector<double> s;
    int size = *(&items + 1) - items;
    for(int i = 0; i < size; i++)
    {
        s[i] = items[i];
    }

    return s;
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
