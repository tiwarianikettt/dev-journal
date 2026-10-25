/* Write a code to print the following pattern:
1        1
12      21
123    321
1234  4321
1234554321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int num = 1;
        for(int j = 0; j < i; j++) {
            cout << num;
            num++;
        }

        for(int k = 0; k < 2 * (n - i); k++) {
            cout << " ";
        }

        for(int l = i; l >= 1; l--){
            cout << l;
        }
        cout << endl;
    }
    return 0;
}