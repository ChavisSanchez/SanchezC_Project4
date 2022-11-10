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
        std::fstream inFile;
        double items[12];
        int numOfItems;
    public:
        FileManager();
        ~FileManager();
        void getItems();
        double getItem(int index);
        int getNumOfItems();
        void setNumOfItems(int numOfItems);
};

#endif /*FILEMANAGER_HPP*/

