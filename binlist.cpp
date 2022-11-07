/******************************************
Chavis Sanchez
binlist.cpp
Project 4

Header file for BinList class
******************************************/

#include "binlist.hpp"

BinList::BinList()
{
}

void BinList::addBin(double initialPackage)
{
    bins.push_back(initialPackage);
}

double BinList::getBinCost(int index)
{
    return bins[index];        
}

void BinList::addToBin(int index, double package)
{
    bins[index] += package;        
}

void BinList::removeFromBin(int index, double package)
{
    bins[index] -= package;
}

