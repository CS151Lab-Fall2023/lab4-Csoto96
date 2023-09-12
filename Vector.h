#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector
{
public:
    // Default constructor to initialize
    // an initial capacity of 1 element and
    // allocating storage using dynamic allocation
    Vector();
    // Constructor that initialize mCapacity and mSize two size,
    // allocating storage using dynamic allocation, and
    // sets all elements to 0
    Vector(int size);
    int size();
    int capacity();
    // Adds an element to the end
    void push_back(int n);
    void pop_back();
    //Return the reference to the vector element
    //specified by index
    int& operator[](int index);
    //Display vector, its capasity and size
    void print();
    // Free/release any dynamic memory
    ~Vector();

private:
    int *mElements;
    int mSize;
    int mCapacity;
};

#endif // VECTOR_H
