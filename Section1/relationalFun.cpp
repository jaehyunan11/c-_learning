#include <iostream>
using namespace std;

/*
    > greater than
    >= greater than or equal to
    < less than
    <= less than or equal to
    == equal-to (equality)
    != not-equal-to (equality)
*/

int main()
{
    cout << boolalpha;

    int age = 16;

    int a = 15;
    int b = 20;
    bool areEqual = a == b;

    cout << (a < b) << endl;
    cout << areEqual << endl;

    cout << "Age >= 21? " << (age >= 21) << endl;

    return 0;
}
