#include "numbers.h"
#include <iostream>
using namespace std;
Numbers::Numbers()
{
}
void Numbers::addNumber(){
    cout<<"How many numbers would you like to add?\n";
    cin>>numberOfNumbers;
    numberRow= new int[numberOfNumbers];
    for (int i=0;i<numberOfNumbers;i++)
        cin>>numberRow[numberOfNumbers];
}

void Numbers::print(){
    for (int i=0;i<numberOfNumbers;i++)
        cout<<"Number "<< i<< " is " <<numberRow[i]<<"\n";
}
void Numbers::findBigSmall(){
    int big, small;
    for (int i=0;i<numberOfNumbers;i++){
        if (i==0){
           big=numberRow[i];
           small=numberRow[i];
        }
        else if (i<small)
            small=numberRow[i];
        else if (i>big)
            big=numberRow[i];
    }
    cout<<"Biggest number is "<< big<< "\n";
    cout<<"Smallest number is"<< small<< "\n";
}


/*
int UseArray::findBig(void){        //at least this one seems to work.
    int highest;                    //smallest number is basically the same. why i did not bother.
    for (int i=0; i<length; i++){
        if (i==0){
           highest=dynamicArray[i];
        }
        else if (highest<dynamicArray[i]){
        highest=dynamicArray[i];
        }
    }
  return highest;
}
*/
