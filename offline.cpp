/******************************************
Chavis Sanchez
offline.cpp
Project 4

Class file for Offline class
******************************************/

#include "offline.hpp"

Offline::Offline(std::string fileName)
{
    this->fM = new FileManager(fileName);
}

int Offline::FirstFit()
{
    
    //FileManager* fM = new FileManager(this->fileName);
    
    int length = fM->getNumOfItems();

    double items[length];
    
    for(int i = 0; i < length; i++)
    {
        items[i] = fM->getItem(i);
        std::cout << items[i] << std::endl;
    }
   
    sort(items, fM->getNumOfItems());

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
    

int Offline::BestFit()
{
    int length = fM->getNumOfItems();

    double items[length];
    
    for(int i = 0; i < length; i++)
    {
        items[i] = fM->getItem(i);
        std::cout << items[i] << std::endl;;
    }
   
    sort(items, fM->getNumOfItems());

    int numOfBins = 0;
    std::vector<double> f {0.0};
    
    for(int i = 0; i < length; i++)
    {
        //std::cout << "for loop";
        int maxWeight = 1;
        int j;
        int min = 1 + maxWeight;
        int bestBin = 0;
        /*
        for(j = 0; j < binsBest.size(); j++)
        {
            if(getBinWeight(binsBest[j]) >= items[i] 
                    && getBinWeight(binsBest[j]) - items[i] < min)
            {
          //      std::cout << "if long";
                bestBin = j;
                min = getBinWeight(binsBest[j]) - items[i];
            }
        }

        if(min <= maxWeight + 1)
        {
            //std::cout << "if min <= 1";
            binsBest.push_back(f);
            binsBest[j].push_back(items[i]);
            numOfBins++;
        }
        else
        {
            //std::cout << "else";
            binsBest[bestBin].push_back(items[i]);
        }
        */
    }
    return binsBest.size();
}

bool Offline::overFill(double d)
{
    if(d > 0 && d <= 1)
    {
        return true;
    }
    return false;
}

void Offline::sort(double arr[], int length)
{
    int key;
    for(int i = 0; i < length - 1; i++)
    {
        key = i;
        for(int j = i + 1; j < length; j++)
        if(arr[j] < arr[key])
            key = j;
        if(key != i)
        {
            double temp = arr[key];
            arr[key] = arr[i];
            arr[i] = temp;
            
        }
    }
}

double Offline::getBinWeight(std::vector<double> bin)
{
    double weight = 0.0;
    for(int i = 0; i < bin.size(); i++)
    {
        weight += bin[i];
    }

    return weight;
}

void Offline::displayFirstFit()
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

void Offline::displayBestFit()
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
