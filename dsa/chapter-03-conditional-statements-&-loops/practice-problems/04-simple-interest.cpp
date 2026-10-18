/* Write a program to take input values of principal amount, rate of interest and time from user
and calculate the simple interest */

#include <iostream>
using namespace std;

int main() {
    double P, R, T ,SI;
    cout << "Enter the principal amount: ";
    cin >> P;
    cout << "Enter the rate of interest: ";
    cin >> R;
    cout << "Enter the time (in years): ";
    cin >> T;

    SI = (P * R * T) / 100;
    cout << "The simple interest for the entered values is: " << SI << endl;
    return 0;
}