#include "numbers.h"
#include <iostream>
using namespace std;
Numbers::Numbers()
{
}
void Numbers::addNumber(){
    cout<<"How many numbers would you like to add?\n";
    cin>>numberOfNumbers;                                   //define length of array.
    numberRow= new int[numberOfNumbers];                    //create new array of that length.
    for (int i=0;i<numberOfNumbers;i++)
        cin>>numberRow[i];                                  //fill it with user input numbers.
}

void Numbers::print(){
    for (int i=0;i<numberOfNumbers;i++)
        cout<<"Number "<< i<< " is " <<numberRow[i]<<"\n";  //print em all
}
void Numbers::findBigSmall(){
    int big=numberRow[0], small=numberRow[0];               //start at the begginning
    for (int i=1;i<numberOfNumbers;i++){
        if (numberRow[i]<small)                             //if a value is better, override.
            small=numberRow[i];                             //bubble sort.
        if (numberRow[i]>big)
            big=numberRow[i];
    }
    cout<<"Biggest number is "<< big<< "\n";                //print it.
    cout<<"Smallest number is "<< small<< "\n";
}
