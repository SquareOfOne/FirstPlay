#include <iostream>
#include <math.h>
using namespace std;
double Magic(double m1, double m2);
void Test(void);

int main(void)
{
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

}
