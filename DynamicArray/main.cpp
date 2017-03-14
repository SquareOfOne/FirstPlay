#include <iostream>                 //Basic input/output.
#include <string>                   //Allow the user to give text commands.
#include <numbers.h>                //Add array class.
using namespace std;                //for cin and cout. to lazy for std.

void help(void);                    //placeholder for help method
int main(void)
{
    help();                         //show list of commands
    Numbers bestArray;              //use the constrructor.
    while (true){
        string command;             //string to hold commands.
        cin>>command;               //read commands.
    if (command=="add")
        bestArray.addNumber();
    else if (command=="print")
        bestArray.print();
    else if (command=="find")
        bestArray.findBigSmall();
    else if (command=="help")
        help();
    else if (command=="quit")       //break while loop. triggers return 0, terminate program.
        break;
    else
        cout<<"invalid command\n";
    cout<< "Enter new command\n";
    }
    return 0;
}

void help(void){
    cout<<"List of commands:\n"<<
          "add      add/edit array\n"<<
          "find     find biggest and smallest varriable in array\n"
          "help     summon this list"
          "print    print the entire array\n"
          "quit     summon a giant monkey\n"<<endl;
}
