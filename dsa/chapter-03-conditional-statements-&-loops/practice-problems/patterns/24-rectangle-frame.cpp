/*Write a program to print the following pattern: 
****
*  *
*  *
****
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(i == 1 || i == n || j == 0 || j == n - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}