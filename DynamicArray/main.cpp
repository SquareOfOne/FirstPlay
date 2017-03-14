#include <iostream>                 //Basic input/output.
#include <string>                   //Allow the user to give text commands.
#include <numbers.h>                //Add array class.
using namespace std;                //for cin and cout. to lazy for std.

int main(void)
{
    Numbers bestArray;              //use the constrructor.
    while (true){
        string command;             //create string to hold commands.
        cin>>command;               //read commands.
    if (command=="add")
        bestArray.addNumber();
    else if (command=="print")
        bestArray.print();
    else if (command=="find")
        bestArray.findBigSmall();
    else if (command=="quit")            //break while loop. triggers return 0, terminate program.
        break;
    else
        cout<<"invalid command\n";
    cout<< "Enter new command\n";
    }
    return 0;
}
