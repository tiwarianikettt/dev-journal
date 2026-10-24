/* Write a program to print the following pattern:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int nd = (n + 1) / 2;

    for (int i = 1; i <= nd; i++) {
       for (int j = 0; j < nd - i; j++) {
        cout << " ";
       }
       for (int k = 0; k < 2 * i - 1; k++) {
        cout << "*";
       }
       cout << endl;
    }

    for (int i = nd - 1; i >= 1; i--) {
        for (int j = 0; j < nd - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}