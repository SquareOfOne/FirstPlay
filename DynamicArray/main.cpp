#include <iostream>
using namespace std;

class UseArray{

private:
    int lenght;
    int dynamicArray[lenght];


public:
    addNumber(int n);
    findBig();
    findSmall();
};

int main(void)
{
    UseArray bestArray;


    cout << "Hello World!" << endl;
    return 0;
}

UseArray::UseArray(){
    lenght=1;
    dynamicArray[0]=1;
}
