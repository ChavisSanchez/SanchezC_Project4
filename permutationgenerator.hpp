/******************************************
Chavis Sanchez
permutationgenerator.hpp
Project 4

Header file for PermutationGenerator class
******************************************/

#ifndef PERMUTATIONGENERATOR_HPP
#define PERMUTATIONGENERATOR_HPP

#include <vector>
#include <iostream>

class PermutationGenerator
{
    private:
        std::vector<double> items; 
    public:
        PermutationGenerator();
        std::vector<double> permutate(std::vector<double> items);
        std::vector<double> arrayToVector(double items[]);
        std::vector<double> getItems();
        int factorial(int f);
};

#endif /*PERMUTATIONGENERATOR_HPP*/
