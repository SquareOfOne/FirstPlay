#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include"zookeeper.h"
using namespace std;

int main(void)
{
    vector<string> joesData;                        //vector to hold data.
    while (true){
        string command="import";                    //string to hold commands.
        cin>>command;                               //read commands.
        if (command=="import"){
            zookeeper joe;                          //creating objekt using the constructor.
            joesData=joe.getData();
            command="sort";
        }
        else if (command=="sort"){
            sort(joesData.begin(), joesData.end());
            vector<string>::iterator jane;          //jane keep track of joesData.
            cout<<"Animals sorted by social media activity:\n";
            for (jane=joesData.begin(); jane!=joesData.end(); jane++){
                cout<<*jane<<"\n";
            }
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
