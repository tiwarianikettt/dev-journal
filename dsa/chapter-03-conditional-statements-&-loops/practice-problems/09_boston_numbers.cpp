/* Write a code for Boston numbers:
Boston Numbers: Sum of all the factors of the input digit.
Example: N = 10 = 1 * 2 * 5 * 10 as its factors so we have to find sum of all these factors.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    cout << "Sum of the factors of the given number is: " << sum;
    return n;
}