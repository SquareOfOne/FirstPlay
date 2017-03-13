#ifndef NUMBERS_H
#define NUMBERS_H


class Numbers
{
private:
    int numberOfNumbers;
    int *numberRow;
public:
    Numbers();
    void addNumber();
    void shrink();
    void print();
};

#endif // NUMBERS_H
