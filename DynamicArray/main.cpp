#include <iostream>
using namespace std;

class UseArray{

private:
    int lenght;
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
    if (command==0){            //for now, 0 is the command used to add numbers.
        int input=0;
        cout<<"Enter Number"<<endl;
        cin>>input;
        bestArray.addNumber(input);
    }
    cout<< bestArray.findBig();
    return 0;
}

UseArray::UseArray(){
    lenght=1;           //this actually means the lenght is 1.
    dynamicArray[0]=1;
}

int UseArray::addNumber(int n){
    lenght=lenght+1;
    return dynamicArray[lenght]=n;
}

int UseArray::findBig(void){
    int highest;
    for (int i=0; i>lenght; i++){

        if (i==0){
           highest=dynamicArray[i];
        }
        else if (highest<dynamicArray[i]){
        highest=dynamicArray[i];
        }
    }
  return highest;
}
