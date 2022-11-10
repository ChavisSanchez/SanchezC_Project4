/******************************************
Chavis Sanchez
online.hpp
Project 4

Header file for Online class
******************************************/

#ifndef ONLINE_HPP
#define ONLINE_HPP

#include <iostream>
#include <vector>
#include "filemanager.hpp"

class Online
{
    private:
        std::vector<std::vector<double>> binsFirst;
        std::vector<std::vector<double>> binsNext;
        std::vector<std::vector<double>> binsBest;
        FileManager fM2;
        int length;
        double items[12];
    public:
        Online();
        int FirstFit();
        int NextFit();
        int BestFit();
        double getBinWeight(std::vector<double> bin);
        void displayFirstFit();
        void displayNextFit();
        void displayBestFit();
};


#endif /*ONLINE_HPP*/
