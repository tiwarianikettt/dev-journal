/* Write a code to print the following pattern:
ABCDE
ABCD
ABC
AB
A
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        char alpha = 'A';
        for(int j = 0; j < i; j++) {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
    return 0;
}