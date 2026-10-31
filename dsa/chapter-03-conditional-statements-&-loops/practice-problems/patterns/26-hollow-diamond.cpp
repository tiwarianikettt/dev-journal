/*Write a program to print the following program: 
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

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = n; i >= 1; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        for(int k = 0; k <= n - 1 - i; k++){
            cout << " ";
        }

        for(int l = 0; l <= n - 1 - i; l++){
            cout << " ";
        }

        for(int m = 0; m < i; m++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        for(int k = 0; k < n - i; k++){
            cout << " ";
        }

        for(int l = 0; l < n - i; l++){
            cout << " ";
        }

        for(int m = 0; m < i; m++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}