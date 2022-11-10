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
    oF.FirstFit();

    oF.displayFirstFit();

    oF.BestFit();

    oF.displayBestFit();

    Online oN;
    
    oN.FirstFit();

    oN.displayFirstFit();

    oN.BestFit();

    oN.displayBestFit();
    
    oN.NextFit();

    oN.displayNextFit();


    return 0;
}
