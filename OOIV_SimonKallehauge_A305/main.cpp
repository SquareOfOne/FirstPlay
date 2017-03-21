#include <iostream>
#include"zookeeper.h"
#include <vector>

using namespace std;

int main(void)
{
    vector<string> joesData;                        //vector to hold data.
    while (true){
        string command;                             //string to hold commands.
        cin>>command;                               //read commands.
        if (command=="import"){
            zookeeper joe;                          //creating objekt using the constructor.
            joesData=joe.getData();
        }
        else if (command=="sort"){
            vector<string>::iterator jane, john;          //jane is a itterator, which can sort joesData.
            jane=joesData.begin();
            john=joesData.end();
                cout<<distance(jane,john)<<"and "<<*john<<endl;
        }
        else if (command=="quit"){
        break;
        }
        else{
            cout<<"Type 'import' to import data\nType 'sort' to sort data\nType 'quit' to quit"<<endl;
        }
    }
return 0;
}
