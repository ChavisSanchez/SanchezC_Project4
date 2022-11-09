/******************************************
Chavis Sanchez
filemanager.hpp
Project 4

Header file for FileManager class
******************************************/

#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <iostream>
#include <fstream>

class FileManager
{
    private:
        double* items;
        std::string fileIn;
        std::ifstream inFile;
        int numOfItems;
    public:
        FileManager(std::string fileIn);
        ~FileManager();
        void getItems();
        double getItem(int index);
        int getNumOfItems();
        void setNumOfItems(int numOfItems);
};

#endif /*FILEMANAGER_HPP*/

