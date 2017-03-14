#include <iostream>                 //Basic input/output.
#include <string>                   //Allow the user to give text commands.
#include <numbers.h>                //Add array class.
using namespace std;                // for cin and cout.
                                    //TODO: make array dynamic, wait for commands, add text commands, add UI.

int main(void)
{
    Numbers bestArray;
    string command;
    while (true){
    cin>>command;
    if (command=="add")
        bestArray.addNumber();
    if (command=="print")
        bestArray.print();
    if (command=="find")
        bestArray.findBigSmall();
    if (command=="quit")
        break;
    else{
        cout<<"invalid command\n";
    }
    cout<< "Enter new command\n";
    }
    return 0;
}



