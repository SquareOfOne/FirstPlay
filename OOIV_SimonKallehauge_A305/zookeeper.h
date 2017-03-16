#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class zookeeper
{
private:
    vector<string> animalData;
    ifstream inputAnimals;
    bool ready = false;
    void openZoo(std::string cageNumber);
    void openCage();
public:
    zookeeper();
    bool hungry();
    vector<string>getData();
};

#endif // ZOOKEEPER_H
