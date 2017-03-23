#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class zookeeper
{
private:
    vector<string> animalData;              //vector of strings to hold data
    ifstream inputAnimals;                  //input stream class to operate on files
    bool ready = false;                     //bool stay false if file is not found or read
    void openZoo(std::string cageNumber);   //method to open the file-pasth in cageNumber
    void openCage();                        //method to convert the stream to vector
public:
    zookeeper();                            //constructor
    vector<string>getData();                //method to import data
};

#endif // ZOOKEEPER_H
