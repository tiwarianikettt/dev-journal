/*Write a program to print the following pattern: 
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int num = n;
        for(int j = 0; j < i; j++){
            cout << num;
            num--;
        }

        for(int j = 0; j < n - i; j++){
            cout << num;
        }
        cout << endl;
    }
    return 0;
}