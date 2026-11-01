
/* Write a program to check whether the given number is an Armstrong number or not */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    int temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += round(pow(digit, digits));
        temp /= 10;
    }

    if (n >= 0 && sum == n) {
        cout << n << " is an Armstrong number.";
    } else {
        cout << n << " is not an Armstrong number.";
    }

    return 0;
}
