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
        std::string fileIn;
        void packBins();
        std::vector<std::vector<double>> bins;
    public:
        Optimal(std::string fileIn);
        void findOptimalSolution();
};

#endif /*OPTIMAL_HPP*/
