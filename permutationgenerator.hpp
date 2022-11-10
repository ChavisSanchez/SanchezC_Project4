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
        PermutationGenerator(std::vector<double> items);
        std::vector<double> permutate();
        void swapElements(int x, int y);
        std::vector<double> getItems();
        int factorial(int f);
};

#endif /*PERMUTATIONGENERATOR_HPP*/
