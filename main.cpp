/******************************************
Chavis Sanchez
main.cpp
Project 4

Main File for project 4
******************************************/

#include <iostream>
#include "filemanager.hpp"
#include "binlist.hpp"
int main()
{
    BinList list;

    list.addBin(0.45);
    list.addBin(0.435);
    list.addBin(0.75);
    list.addBin(0.85);
    list.addBin(0.25);

    std::cout << list.getBinCost(0) << std::endl;
    std::cout << list.getBinCost(1) << std::endl;
    std::cout << list.getBinCost(2) << std::endl;
    std::cout << list.getBinCost(3) << std::endl;

    list.addToBin(2, 0.25);
    
    std::cout << list.getBinCost(2) << std::endl;

    list.removeFromBin(2, 0.25);

    std::cout << list.getBinCost(2) << std::endl;

    return 0;
}

