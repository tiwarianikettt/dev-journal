/* Write a program to print the following pattern:
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        char ch = 'A' + n - i;
        for(int j = 0; j < i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}