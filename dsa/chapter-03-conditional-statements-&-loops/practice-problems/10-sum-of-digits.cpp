/* Write a code to take input of a number from the user and give out the sum of digits as the output.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "The sum of the digits are: " << sum << endl;
    return 0;
}