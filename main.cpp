/******************************************
Chavis Sanchez
main.cpp
Project 4

Main file 
******************************************/

#include "filemanager.hpp"
#include "offline.hpp"
#include "online.hpp"
#include "optimal.hpp"

int main()
{

    Offline oF;
    Online oN;
    Optimal oP;

    std::cout << "   Policy         |   Total Bins Used   " << std::endl;
    std::cout << "Optimal Solution  |       " << oP.getBinCount() << std::endl;
    std::cout << "Online Alrgorithm |" << std::endl;
    std::cout << "   First Fit      |       " << oN.FirstFit() << std::endl;
    std::cout << "   Next Fit       |       " << oN.NextFit() << std::endl;
    std::cout << "   Best Fit       |       " << oN.BestFit() << std::endl;
    std::cout << "Offline Alrgorithm|" << std::endl;
    std::cout << "   First Fit      |       " << oF.FirstFit() << std::endl;
    std::cout << "   Best Fit       |       " << oF.BestFit() << std::endl;

    std::cout << "Optimal Bin Placement: " << std::endl;
    //oP.displayOptimalSolution();
    std::cout << "Online Bin Placement: " << std::endl;
    std::cout << "First Fit" << std::endl;
    oN.displayFirstFit();
    std::cout << "Next Fit" << std::endl;
    oN.displayNextFit();
    std::cout << "Best Fit" << std::endl;
    oN.displayBestFit();
    std::cout << "Offline Bin Placement: " << std::endl;
    std::cout << "First Fit" << std::endl;
    oF.displayFirstFit();
    std::cout << "Best Fit" << std::endl;
    oF.displayBestFit();

    return 0;
}
