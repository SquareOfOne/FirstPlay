#include "zookeeper.h"
#include <iostream>
#include <string>

using namespace std;
zookeeper::zookeeper(){
    openZoo("C:\\Users\\Bot\\Desktop\\animals.txt");
    if (ready)
        openCage();
    else
        cout<<"The gate is stuck\n";
}

std::vector<string> zookeeper::getData() {
    return animalData;
}

void zookeeper::openZoo(string cageNumber){
    inputAnimals.open(cageNumber);
    if (inputAnimals.is_open()){
        cout<<"The "<<cageNumber<<" is loose!!!\n";
        ready=true;
    }
    else{
        cout<<"The cage "<<cageNumber<<"is locked\n";
        ready=false;
    }
}

void zookeeper::openCage(){
    string temp;
    if (ready){
        while (inputAnimals>>temp){
            cout<<"The animal "<<temp<<" has arrived in the zoo\n";
        }
        animalData.push_back(temp);
    }
}
