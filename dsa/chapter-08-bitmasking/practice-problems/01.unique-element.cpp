/* Write a program using bitwise operators to find the unique number
   from the numbers entered by the user. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        ans ^= num;
    }

    cout << "The unique number is: " << ans;
    return 0;
}