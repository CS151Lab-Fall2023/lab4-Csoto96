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
};

#endif // NEWVECTOR_H