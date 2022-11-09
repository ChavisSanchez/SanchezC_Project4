/******************************************
Chavis Sanchez
filemanager.cpp
Project 4

Class file for FileManager class
******************************************/


#include "filemanager.hpp"

FileManager::FileManager()
{
    this->numOfItems = 0;
    getItems();
}

FileManager::~FileManager()
{
    delete[] items;
    delete(items);
}

void FileManager::getItems()
{
    inFile.open("items.txt");
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
    
    inFile.close();
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
