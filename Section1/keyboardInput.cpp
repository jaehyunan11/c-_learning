#include <iostream>
#include <string>
using namespace std; // std standard

int main()
{
    int age;
    string fullname;

    cout << "Please enter your name" << endl;
    getline(cin, fullname);

    cout << "Please enter your age" << endl;
    cin >> age;

    cout << fullname << endl;
    cout << age << endl;

    return 0;
}