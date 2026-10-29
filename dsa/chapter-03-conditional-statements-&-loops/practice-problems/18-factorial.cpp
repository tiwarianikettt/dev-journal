/*Write a program to display the factorial of a given number */

#include <iostream>
using namespace std;

int main(){
    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    int factorial = 1;
    i = n;

    if(n == 1 || n == 0){
        cout << "The factorial of the given number is: 1" << endl;
    }else{
        while(i > 1){
            factorial = factorial * i;
            i--;
        }
    }

    cout << "Factorial of the given number is: " << factorial;
    return 0;
}