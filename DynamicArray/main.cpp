#include <iostream>
using namespace std;
//TODO: make array dynamic, wait for commands, add text commands, add UI.
class UseArray{
private:
    int length;                     //used by for loop. fix: dynamicArray[lenght]
    int * plength;                  //pointer to change length.
    int dynamicArray[10];           //temporary fix

public:
    UseArray ();
    int addNumber(int n);
    int findBig(void);
    int findSmall(void);
};

int main(void)
{
    UseArray bestArray;
    int command;
    cin>>command;
    if (command==0){                //for now, 0 is the command used to add numbers.only works once.have to be used.FIX.
        int input=0;
        cout<<"Enter Number"<<endl;
        cin>>input;
        bestArray.addNumber(input); //this might have to be a pointert as well..
    }
    cout<< bestArray.findBig();
    return 0;
}

UseArray::UseArray(){
    length=1;                       //set length to 1.
    dynamicArray[0]=1;
    plength= &length;

}

int UseArray::addNumber(int n){
    *plength=length+1;
    return dynamicArray[length]=n;  //bug: number is not saved to "bestArray". random int take the spot.
}

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
