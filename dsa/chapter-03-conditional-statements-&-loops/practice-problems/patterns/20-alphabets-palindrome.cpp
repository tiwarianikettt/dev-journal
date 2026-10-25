/* Write a code to print the following pattern: 
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }

        char alpha = 'A';
        for(int k = 0; k < i; k++) {
            cout << alpha;
            alpha++;
        }

        alpha -= 2;
        for(int l = 0; l < i - 1; l++){
            cout << alpha;
            alpha--;
        }
        cout << endl;
    }
    return 0;
}