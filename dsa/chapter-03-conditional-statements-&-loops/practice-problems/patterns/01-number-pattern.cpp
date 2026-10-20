/* Write a program to print the following pattern:
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of  rows for the pattern: ";
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}