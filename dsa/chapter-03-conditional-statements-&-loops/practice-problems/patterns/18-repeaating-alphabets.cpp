/* Write a code to print the following pattern:
A
BB
CCC
DDDD
EEEEE
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char alpha = 'A';

    for(int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << alpha;
        }
        cout << endl;
        alpha++;
    }
    return 0;
}