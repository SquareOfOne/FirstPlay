#include "zookeeper.h"
#include <iostream>
#include <string>

using namespace std;
zookeeper::zookeeper(){                                 //constructor
    openZoo("C:\\Users\\Simon\\Desktop\\animals.txt");
    if (ready)                                          //if the file path work
        openCage();                                     //save data to vector
    else
        cout<<"The gate is stuck\n";                    //debug
}

std::vector<string> zookeeper::getData() {              //until the data is returned, the data cannot be printed
    return animalData;
}

void zookeeper::openZoo(string cageNumber){
    inputAnimals.open(cageNumber);                      //open file
    if (inputAnimals.is_open()){                        //returns true if the stream is assosiated to a file
        cout<<"The "<<cageNumber<<" is loose!!!\n";     //print data.
        ready=true;
    }
    else{
        cout<<"The cage "<<cageNumber<<"is locked\n";   //debug
        ready=false;
    }
}

void zookeeper::openCage(){                             //convert stream to vector
    string temp;
    if (ready){
        while (inputAnimals>>temp){
            cout<<"The animal "<<temp<<" has arrived in the zoo\n";
            animalData.push_back(temp);                 //add new element to the end of the container
        }
    }
}
