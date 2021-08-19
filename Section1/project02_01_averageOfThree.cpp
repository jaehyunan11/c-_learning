#include <iostream>
#include <string>

using namespace std;

// To run in terminal, type make "name of the file with cpp"
// Run by ./<name of the file>

int main()

{
    double num1;
    double num2;
    double num3;
    double average;

    cout << "Please enter a real number" << endl;
    cin >> num1;

    cout << "Please enter a second real number" << endl;
    cin >> num2;

    cout << "Please enter the final real number" << endl;
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "The average is " << average << endl;

    return 0;
}