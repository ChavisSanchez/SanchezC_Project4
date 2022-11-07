/******************************************
Chavis Sanchez
binlist.hpp
Project 4

Header file for BinList class
******************************************/

#ifndef BINLIST_HPP
#define BINLIST_HPP

#include <vector>

class BinList
{
    private:
        std::vector<double> bins;
    public:
        BinList();
        void addBin(double initialPackage);
        double getBinCost(int index);
        void addToBin(int index, double package);
        void removeFromBin(int index, double package);
};

#endif /*BINLIST_HPP*/

