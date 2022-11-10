/******************************************
Chavis Sanchez
optimal.hpp
Project 4

Header file for Optimal class
******************************************/

#ifndef OPTIMAL_HPP
#define OPTIMAL_HPP

#include <iostream>
#include "permutationgenerator.hpp"
#include "filemanager.hpp"

class Optimal
{
    private:
        PermutationGenerator* pG;
        FileManager fM;
        std::vector<std::vector<double>> bins;
        std::vector<std::vector<double>> packBins();
        int binCount;
        std::vector<double> items;
    public:
        Optimal();
        int findOptimalSolution();
        void displayOptimalSolution();
        double getBinWeight(std::vector<double> bin);
        int getBinCount();
        void setBinCount(int binCount);
};

#endif /*OPTIMAL_HPP*/
