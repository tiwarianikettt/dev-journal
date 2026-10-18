// Write a code to check whether the number is prime or not.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number to check: ";
    cin >> num;

    for(int i = 2; i < num; i++) {
        if (num % i != 0) {
            cout << "The number " << num << " is prime." << endl;
            break;
        } else {
            cout << "The number " << num << " is not prime." << endl;
        }
    }
    return 0;
}