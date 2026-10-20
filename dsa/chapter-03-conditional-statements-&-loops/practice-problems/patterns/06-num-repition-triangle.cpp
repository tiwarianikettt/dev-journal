/* Write a program to print the following pattern:
1
2 2
3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }
    return 0;
}