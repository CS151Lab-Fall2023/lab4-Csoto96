/**
 * @file Vector.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
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
    int size() const;
    int capacity() const;
    // Adds an element to the end
    void push_back(int n);
    void pop_back();
    //Return the reference to the vector element
    //specified by index
    int& operator[](int index);
    //Display vector, its capasity and size
    virtual void print() const;
    // Free/release any dynamic memory
    ~Vector();

protected:
    int *mElements;
    int mSize;
    int mCapacity;
};

#endif // VECTOR_H
