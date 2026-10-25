/* Write a code to print the following pattern:
A
AB
ABC
ABCD
ABCDE
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        char alpha = 'A';
        for(int j = 0; j < i; j++) {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
    return 0;
}