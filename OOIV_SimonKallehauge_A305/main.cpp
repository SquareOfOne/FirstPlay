#include <iostream>                                 //for cin and cout.
#include <string>                                   //for commands.
#include <vector>                                   //using vectors to save data.
#include <algorithm>                                //for sorting the data alphabetical.
#include"zookeeper.h"                               //include header file to use.
using namespace std;                                //used for cin, cout and sort.

int main(void)
{
    vector<string> joesData;                        //vector to hold data.
    vector<string>::iterator jane;                  //jane keep track of joesData.
    while (true){                                   //while loop to run several commands.
        string command="import";                    //string to hold commands.
        cin>>command;                               //read commands.
        if (command=="import"){
            zookeeper joe;                          //creating objekt using the constructor.
            joesData=joe.getData();                 //use objekt access.
        }
        else if (command=="sort"){
            sort(joesData.begin(), joesData.end()); //sort data using algorithm.
        }
        else if (command=="print"){
            cout<<"Animals sorted by social media activity:\n";
            for (jane=joesData.begin(); jane!=joesData.end(); jane++){
                cout<<*jane<<"\n";                  //jane point out wich data to print.
            }
        }
        else if (command=="quit"){
        break;                                      //beak while-loop to terminate program.
        }
        else{
            cout<<"Type 'import' to import data\n"<<
                  "Type 'print' to print\n"
                  "Type 'sort' to sort data\n"<<
                  "Type 'quit' to quit\n";
        }
    }
return 0;
}
