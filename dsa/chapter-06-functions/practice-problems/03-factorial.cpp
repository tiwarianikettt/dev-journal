/*Write a function to calculate the factorial of a number.*/

#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        cout << "Factorial of " << n << " is 1" << endl;
    }else if(n < 0){
        cout << "Factorial of negative numbers is not defined." << endl;
    }else{
        int fact = 1;
        for(int i = 2; i <= n; i++){
            fact *= i;
        }
        cout << "Factorial of " << n << " is " << fact << endl;
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    factorial(n);
    return 0;
}