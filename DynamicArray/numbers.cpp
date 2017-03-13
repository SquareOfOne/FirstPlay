#include "numbers.h"
using namespace std;
Numbers::Numbers()
{

}
Numbers::addNumber(){
    int addUp;
    cout<<"How many numbers would you like to add?\n";
    cin>>addUp;
    numberOfNumbers=numberOfNumbers+addUp;
    for (int i=0;i<addUp;i++)
        cin>>numberRow[numberOfNumbers+i];
}

Numbers::print(){
    for (int i=0;numberOfNumbers;i++)
        cout<<"Number "<< i<< "is" <<numberRow[i]<<endl;
}
