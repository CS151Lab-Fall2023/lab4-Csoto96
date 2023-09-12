/**
 * @file test.cpp
 * @author Chris Soto
 * @brief 
 * @version 0.1
 * @date 2023-09-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include "Vector.h"
#include "NewVector.h"

using namespace std;

int main()
{
   //Lab5.1
    // cout <<"Creating a vector...\n";
    // Vector vect;
    // vect.print();
    // for (int i = 1; i <=3; i++)
    // {
    //     cout << "Pushing an element...\n";
    //     vect.push_back(i);
    //     vect.print();
    // }

    // cout << "Popping an element...\n";
    // vect.pop_back();
    // vect.print();

    // cout <<"Setting 1st element to 7...\n";
    // vect[0]=7;
    // vect.print();
    NewVector vt;
    vt.print();
    NewVector vt2(3);
    cout<<"Size = "<<vt2.size()<<endl;
    vt2.print();
    vt2.fillWith2();
    vt2.print();
    
    return 0;
}
