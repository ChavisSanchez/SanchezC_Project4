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
        std::vector<std::vector<double>> packBins();
        double items[12];
    public:
        Optimal();
        std::vector<std::vector<double>> findOptimalSolution();
        void displayOptimalSolution(std::vector<std::vector<double>> bons);
        double getBinWeight(std::vector<double> bin);
};

#endif /*OPTIMAL_HPP*/
