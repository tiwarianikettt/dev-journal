#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int nd = (n + 1) / 2;

    for (int i = 0; i <= nd; i++)
    {
        for(int j = 0; j < nd - i; j++) {
            cout << " ";
        }

        for(int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = nd + 1; i <= n; i++) {
        for(int j = 0; j < i - nd; j++) {
            cout << " ";
        }        

        for(int k = 0; k < 2 * (n - i) + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}