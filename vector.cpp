#include "Vector.h"
/**
 * @brief Construct a new Vector:: Vector object
 *   sets initial capacity of 1
 *   Assign a dynamic array with a size of 1 to mElements
 *   sets mSize to 0
 */
Vector::Vector()
{
    cout << "Parent is created..." << endl;
    mElements = new int[1];
    mCapacity = 1;
    mSize = 0;
}
/**
 * @brief prints the vector out and then tells what the size and capacity is currently at
 * 
 */
void Vector::print() const
{
    for(int i = 0; i < mSize; i++)
    {
        cout << mElements[i] << " ";
    }
    cout << endl;
    cout << "Vector Size is " << mSize << endl;
    cout << "Vector Capacity is " << mCapacity << endl;
}
/**
 * @brief Construct a new Vector:: Vector object
 *        Assigns mCcapacity and mSize = size
          Assign a dynamic array with a size of mSize to mElements
          Assign zero to all elements
 * @param size 
 */
 Vector::Vector(int size)
 {
    cout << "Parent with Size is created..." << endl;
    mCapacity = size;
    mSize = size;
    mElements = new int[mSize];
    for(int i = 0; i<mSize;i++)
    {
        *(mElements+i) = 0;
    }
 }

/**
 * @brief Destroy the Vector:: Vector object
 *        Free or release the dynamic array
 */
 Vector::~Vector()
 {
    cout << "Parent is destroyed..." << endl;
    delete [] mElements;
    mElements = nullptr;

 }
/**
 * @brief Checks if capacity is full and allocates bigger space for a new array then addes the data to the end of the array
 * 
 * @param data 
 */
void Vector::push_back(int data)
{
    if(mSize == mCapacity)
    {
        mCapacity = mCapacity*2;
        int *temp = new int[mCapacity];
        for(int i = 0; i<mSize; i++)
        {
            temp[i] = mElements[i];
        }
        delete [] mElements;
        mElements = temp;
    }
        mElements[mSize] = data;
        mSize++;
    
}
/**
 * @brief 
 * 
 */
void Vector::pop_back()
{
    if(mSize > 0)
    {
        mSize--;
    }
    else 
    {
        cout << "Vector is Empty" << endl;
    }
}
// Clue on the implementation of this function:
//  You only need one very short statement updating one of the member variables
//  You do not need to resize the dynamic array
//  Make sure there are elements in the vector
/**
 * @brief //  Return the current size of the vector
 * 
 * @return int 
 */
int Vector::size() const
{
    return mSize;
}
/**
 * @brief //  Return the current capacity of the vector
 * 
 * @return int 
 */
 int Vector::capacity() const
 {
    return mCapacity;
 }
/**
 * @brief //  Return the reference to the vector element specified by the index
 * 
 * @param index 
 * @return int& 
 */
 int& Vector::operator[](int index)
 {
    return mElements[index];
 }
