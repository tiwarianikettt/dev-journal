/* Write a code to print the following patterm:
for n = 3
* *** *** *
** ** ** **
*** * * ***
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << "*";
        }
        cout << " ";

        for (int i = 0; i < n - r + 1; i++)
        {
            cout << "*";
        }
        cout << " ";

        for (int i = 0; i < n - r + 1; i++)
        {
            cout << "*";
        }
        cout << " ";

        for (int i = 0; i < r; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}