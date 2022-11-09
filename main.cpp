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
    Online* oN = new Online("items.txt");

    oN->FirstFit();

    oN->displayFirstFit();

    Offline* oF = new Offline("items.txt");

    oF->FirstFit();

    oF->displayFirstFit();
    return 0;
}
