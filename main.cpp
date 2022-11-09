/******************************************
Chavis Sanchez
main.cpp
Project 4

Main File for project 4
******************************************/

#include <vector>
#include <iostream>
#include "filemanager.hpp"
#include "offline.hpp"


int main()
{
    //FileManager* fm = new FileManager("items.txt");

    /*
    for(int i = 0; i < fm->getNumOfItems(); i++)
    {
        std::cout << fm->getItem(i) << std::endl;
    }
    */
    Offline* oF = new Offline("items.txt");

    std::cout << oF->FirstFit() << std::endl;
    
    std::cout << oF->BestFit() << std::endl;

//    oF->displayFirstFit();
    
  //  std::cout << oF->BestFit() << std::endl;

//    oF->displayBestFit();

    return 0;
}

