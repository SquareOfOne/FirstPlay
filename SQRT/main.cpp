#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;                                        //used by cin and cout. basc stuff.
double Magic(double m1, double m2);                         //placeholder. apparently neccesarry.
void Test(void);                                            //another placeholder.

int main(void)
{
    Test();
    double MagicNumber, FirstNumber, SecondNumber,MagicRoot;
    cout<< "please enter a magic number"<<endl;
    cin>>FirstNumber;
    cout<< "Please enter another magic number"<<endl;
    cin>>SecondNumber;
    cout << "You have entered the magic numbers "<< FirstNumber<<" and "<< SecondNumber << endl;
    MagicNumber=FirstNumber+SecondNumber;
    cout<<"Your magic number is "<< MagicNumber<<endl;
    MagicRoot = sqrt(MagicNumber);
    cout<<"The root of magic is "<< MagicRoot<<endl;
    MagicRoot=Magic(FirstNumber,SecondNumber);
    cout<<"The root of magic is "<< MagicRoot<<endl;
    return 0;
}

double Magic(double m1, double m2)
{

    double result=sqrt(m1+m2)+1;
    return(result);
}

void Test(void)
{
    srand(time(NULL));                          //find out why this is an error. and how it works...
    double v1=rand();
    cout<<"randoms:"<< v1<<endl;                //yay. I mae fire. ...I mean a rondom. wonder how big it can get?
}
