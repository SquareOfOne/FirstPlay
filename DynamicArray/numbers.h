#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers
{
private:
    int numberOfNumbers;        //array length
    int *numberRow;             //pointer for array.
public:
    Numbers();                  //constructor. need to exist.
    void addNumber();           //create the actual array.
    void findBigSmall();        //find biigest and smallest valiue.
    void print();               //well...
};

#endif // NUMBERS_H
