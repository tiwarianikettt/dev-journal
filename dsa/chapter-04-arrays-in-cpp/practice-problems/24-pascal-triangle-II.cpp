/*Given an integer r, return all the values in the rth row (1-indexed) in Pascal's Triangle in correct order.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the row number: ";
    cin >> n;

    int element = 1;

    cout << element << " ";

    for(int i = 1; i <= n; i++){
        element = element * (n - i);
        element = element / i;
        cout << element << " ";
    }
    return 0;
}