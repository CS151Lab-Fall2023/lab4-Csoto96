#include "Vector.h"
#include "NewVector.h"

using namespace std;

int main()
{
   //Lab5.1
    cout <<"Creating a vector...\n";
    Vector vect;
    vect.print();
    for (int i = 1; i <=3; i++)
    {
        cout << "Pushing an element...\n";
        vect.push_back(i);
        vect.print();
    }

    cout << "Popping an element...\n";
    vect.pop_back();
    vect.print();

    cout <<"Setting 1st element to 7...\n";
    vect[0]=7;
    vect.print();

    return 0;
}
