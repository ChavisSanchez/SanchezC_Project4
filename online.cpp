/******************************************
Chavis Sanchez
online.hpp
Project 4

Class file for online class
******************************************/

#include "online.hpp"

Online::Online(std::string fileName)
{
    this->length = fM2.getNumOfItems();

    for(int i = 0; i < length; i++)
    {
        items[i] = fM2.getItem(i);
    }
}

int Online::FirstFit()
{
    int numOfBins = 0;
    std::vector<double> f{0.0};

    for(int i = 0; i < length; i++)
    {
        int j;
        for(j = 0; j < binsFirst.size(); j++)
        {
            if(getBinWeight(binsFirst[j]) + items[i] <= 1)
            {
                binsFirst[j].push_back(items[i]);
                break;
            }
        }

        if(j == numOfBins)
        {
            binsFirst.push_back(f);
            binsFirst[j].push_back(items[i]);
            numOfBins++;
        }
    }

    return binsFirst.size();
}

int Online::NextFit()
{
    return 1;
}

int Online::BestFit()
{
    int numOfBins = 0;
    double maxWeight = 1;

    std::vector<double> f {0.0};
    
    for(int i = 0; i < length; i++)
    {
        binsBest.push_back(f);
    }

    for(int i = 0; i < length; i++)
    {
        int j;
        double min = maxWeight + 1;
        int bestBin = 0;

        for(j = 0; j < numOfBins; j++)
        {
            if(getBinWeight(binsBest[j]) >= items[i]
                    && getBinWeight(binsBest[j]) - items[i] < min)
            {
                bestBin = j;
                min = getBinWeight(binsBest[j]) - items[i];
            }
        }

        if(min == maxWeight + 1)
        {
            binsBest[numOfBins].push_back(maxWeight - items[i]);
            ++numOfBins;
        }
        else
            binsBest[bestBin].push_back(items[i]);
    }

    for(int i = 0; i < length; i++)
    {
        if(getBinWeight(binsBest[i]) == 0)
        {
            binsBest.pop_back();
        }
    }
    
    return binsBest.size();
}

double Online::getBinWeight(std::vector<double> bin)
{
    double weight = 0.0;
    for(int i = 0; i < bin.size(); i++)
    {
        weight += bin[i];
    }

    return weight;
}

void Online::displayFirstFit()
{
    for(int i = 0; i < binsFirst.size(); i++)
    {
        std::cout << "bin " << i << ": ";
        for(int j = 0; j < binsFirst[i].size(); j++)
        {
            if(binsFirst[i][j] == 0)
            {

            }
            else
            {
                std::cout << binsFirst[i][j] << ", ";
            }
        }
        std::cout << std::endl;
    }
}

void Online::displayNextFit()
{
    for(int i = 0; i < binsNext.size(); i++)
    {
        std::cout << "bin " << i << ": ";
        for(int j = 0; j < binsNext[i].size(); j++)
        {
            if(binsNext[i][j] == 0)
            {

            }
            else
            {
                std::cout << binsNext[i][j] << ", ";
            }
        }
        std::cout << std::endl;
    }
}

void Online::displayBestFit()
{
    for(int i = 0; i < binsBest.size(); i++)
    {
        std::cout << "bin " << i << ": ";
        for(int j = 0; j < binsBest[i].size(); j++)
        {
            if(binsBest[i][j] == 0)
            {

            }
            else
            {
                std::cout << binsBest[i][j] << ", ";
            }
        }
        std::cout << std::endl;
    }
}
