#ifndef NEWVECTOR_H
#define NEWVECTOR_H
#include <iostream>
#include "Vector.h"
using namespace std;

class NewVector : public Vector
{
public:
    NewVector();
    NewVector(int size);
    void fillWith2();
    ~NewVector();
    void print() const;

private:
    int *mElements;
    int mSize;
    int mCapacity;
};

#endif // NEWVECTOR_H