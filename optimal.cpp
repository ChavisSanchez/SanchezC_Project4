/******************************************
Chavis Sanchez
optimal.hpp
Project 4

Class file for Optimal class
******************************************/

#include "optimal.hpp"

Optimal::Optimal()
{
    int length = fM.getNumOfItems();

    this->binCount = 0;

    for(int i = 0; i < length; i++)
    {
        items[i] = fM.getItem(i);
    }
}

std::vector<std::vector<double>> Optimal::findOptimalSolution()
{
    std::vector<std::vector<double>> optimalPack;
    int size = 0;
    int minSize = 13;
    std::vector<double> it = pG.arrayToVector(items);
    for(int j = 0; j < pG.factorial(12) - 1; j++)
    {
        size = 0;
      //  it = pG.permutate(pG.arrayToVector(items));
        size = packBins().size();
        if(size < minSize)
        {
            optimalPack = packBins();
            minSize = size;
        }

        it = pG.permutate(it);
    }

    return optimalPack;
}

void Optimal::displayOptimalSolution(std::vector<std::vector<double>> bins)
{
    for(int i = 0; i < bins.size(); i++)
    {
        std::cout << "bin " << i << ": ";
        for(int j = 0; j < bins[i].size(); j++)
        {
            if(bins[i][j] == 0)
            {

            }
            else
            {
                std::cout << bins[i][j] << ", ";
            }
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<double>> Optimal::packBins()
{
    std::vector<std::vector<double>> bins;
    int numOfBins = 0;
    std::vector<double> f{0.0};

    for(int i = 0; i < 12; i++)
    {
        int j;
        for(j = 0; j < bins.size(); j++)
        {
            if(getBinWeight(bins[j]) + items[i] <=1)
            {
                bins[j].push_back(items[i]);
                break;
            }
        }

        if(j == numOfBins)
        {
            bins.push_back(f);
            bins[j].push_back(items[i]);
            numOfBins++;
        }
    }
    return bins;
}

double Optimal::getBinWeight(std::vector<double> bin)
{
    double weight = 0.0;
    for(int i = 0; i < bin.size(); i++)
    {
        weight += bin[i];
    }
    return weight;
}

int Optimal::getBinCount()
{
    return this->binCount;
}

void Optimal::setBinCount(int binCount)
{
    this->binCount = binCount;
}
