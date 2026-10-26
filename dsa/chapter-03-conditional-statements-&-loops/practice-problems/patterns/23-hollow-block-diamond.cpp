/* Write a code to print the following pattern: 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int space = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }

        for(int k = 0; k < space; k++){
            cout << " ";
        }

        for(int l = 0; l < n - i; l++){
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        for(int k = 0; k < space; k++){
            cout << " ";
        }

        for(int l = 0; l < i; l++){
            cout << "*";
        }

        space -= 2;
        cout << endl;
    }
    return 0;
}