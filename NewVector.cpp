#include "NewVector.h"

NewVector::NewVector()
{
    cout << "Child is Created..." << endl;
}

NewVector::~NewVector()
{
    cout << "Child is Destroyed..." << endl;
}

NewVector::NewVector(int size) :Vector(size)
{
    cout << "Child with Size is created..." << endl;
}

void NewVector::print() const
{
    cout<<"Size in print = "<<mSize<<endl;
    for(int i = 0; i < Vector::mSize; i++)
    {
        cout << Vector::mElements[i] << " ";
    }
    cout << endl;
    cout << "Vector Size is " << size() << endl;
    //cout << "Vector Capacity is " << mCapacity << endl;
}

void NewVector::fillWith2()
{
    for(int i = 0; i<mSize; i++)
    {
        mElements[i] = 2;
    }
}