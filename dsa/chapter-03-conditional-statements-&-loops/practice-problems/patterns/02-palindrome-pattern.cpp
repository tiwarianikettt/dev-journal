/* Write a program to print the given patterns:
    1
   232
  34543
 4567654
567898765
*/

#include <iostream>
using namespace std;

int main() {
    int N, i, no, r;
    cout << "Enter the number of rows for the pattern: ";
    cin >> N;

    r = 1;
    while (r <= N) {
        i = 1;
        while (i <= N - r) {
            cout << " ";
            i++;
        }
        
        no = r;
        i = 1;
        while (i <= r) {
            cout << no;
            no++;
            i++;
        }

        no = 2 * r - 2;
        i = 1;
        while (i <= r - 1) {
            cout << no;
            no--;
            i++;
        }

        cout << endl;
        r++;
    }
    return 0;
}