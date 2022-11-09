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
        PermutationGenerator pG;
        FileManager fM;
        std::vector<std::vector<double>> bins;
        int packBins(std::vector<double> items);
    public:
        Optimal(std::string fileIn);
        void findOptimalSolution();
        void displayOptimalSolution();
};

#endif /*OPTIMAL_HPP*/
