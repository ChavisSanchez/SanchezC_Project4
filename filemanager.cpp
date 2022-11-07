/******************************************
Chavis Sanchez
filemanager.cpp
Project 4

Class file for FileManager class
******************************************/


#include "filemanager.hpp"

FileManager::FileManager(std::string fileIn)
{
    this->fileIn = fileIn;
    this->numOfItems = 0;        
}

void FileManager::getItems()
{
    inFile.open(this->fileIn);
    double item = 0;
    inFile >> numOfItems;
    
    items = new double(numOfItems);

    for(int i = 0; i < numOfItems; i++)
    {
        inFile >> item;
        if(item > 1 || item <= 0)
        {
            numOfItems--;
        }
        else
        {
            items[i] = item;
        }
    }

}

double FileManager::getItem(int index)
{
    return items[index];
}

int FileManager::getNumOfItems()
{
    return this->numOfItems;
}

void FileManager::setNumOfItems(int numOfItems)
{
    this->numOfItems = numOfItems;
}
