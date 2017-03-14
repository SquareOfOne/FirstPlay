#include "numbers.h"
#include <iostream>
using namespace std;
Numbers::Numbers()
{
    numberOfNumbers=0;                                      //assign the starting length 0.
    oldNumbers=new int[100];
}
void Numbers::addNumber(){
    int newNormal, oldNormal;
    cout<<"How many spaces would you like to add?\n";
    cin>>newNormal;                                         //define array expansion.
    for (int i=0;i>numberOfNumbers;i++)
        oldNumbers[i]=&numberRow[i];                         //save old numbers.
    oldNormal=numberOfNumbers;                              //need to remebmer when the old stop end the new begin
    cout<<"here:"<<oldNumbers[1];
    numberOfNumbers=numberOfNumbers+newNormal;
    numberRow= new int[numberOfNumbers];                    //create new array of that length.
    for (int i=0;i<numberOfNumbers;i++){
        if(i<oldNormal)
            numberRow[i]=*oldNumbers[i];                     //reinstate old numbers
        else{
        cout<<"Please enter a new number\n";
        cin>>numberRow[i];                                  //fill in with user input numbers.
        }
    }
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
