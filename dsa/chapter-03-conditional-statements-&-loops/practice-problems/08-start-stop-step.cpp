/* Write a program to read initial, final and step values from the user and print a table for fahrenheit to
celsius conversion. The table should start from the initial value and end at the final value with the given step value. */

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, initial, final, step;
    cout << "Enter the initial value: ";
    cin >> initial;
    cout << "Enter the final value: "; 
    cin >> final;
    cout << "Enter the step value: ";
    cin >> step;

    fahrenheit = initial;
    while (fahrenheit <= final) {
        (5 / 9) * (fahrenheit - 32);
        cout << fahrenheit << " F = " << (5.0 / 9.0) * (fahrenheit - 32) << " C" << endl;
        fahrenheit += step;
    }
    return 0;
}