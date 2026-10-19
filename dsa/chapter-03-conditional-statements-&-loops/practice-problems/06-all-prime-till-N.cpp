// Take input value of N from the user and print all the prime numbers from 2 to N.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    for(int i = 2; i <= N; i++) {
        bool isPrime = true;
        for(int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}