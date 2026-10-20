/* Write a program to print the following pattern:
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1 
 */

 #include <iostream>
 using namespace std;

 int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        int num = 1;
        for (int j = 0; j < i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
 }