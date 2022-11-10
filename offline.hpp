/******************************************
Chavis Sanchez
offline.hpp
Project 4

Header file for Offline class
******************************************/

#ifndef OFFLINE_HPP
#define OFFLINE_HPP

#include <iostream>
#include <vector>
#include "filemanager.hpp"

class Offline
{
    private:
        std::vector<std::vector<double>> binsFirst;
        std::vector<std::vector<double>> binsBest;
        FileManager fM;
        int length;
        double items[12];

    public:
        Offline();
        ~Offline();
        int FirstFit();
        int BestFit();
        void sort(double arr[], int length);
        double getBinWeight(std::vector<double> bin);
        void displayFirstFit();
        void displayBestFit();
};

#endif /*OFFLINE_HPP*/
