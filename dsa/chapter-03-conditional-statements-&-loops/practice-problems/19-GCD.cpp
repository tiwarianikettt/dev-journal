/* Write a program to find the greatest common divisor */

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    int gcd;

    if(n1 < n2){
        for(int i = 1; i <= n1; i++){
            if(n1 % i == 0 && n2 % i == 0){
                gcd = i;
            }
        }
    }else{
        for(int i = 1; i <= n2; i++){
            if(n1 % i == 0 && n2 % i == 0){
                gcd = i;
            }
        }
    }

    cout << "The Greatest Common Divisor (GCD) of the given two numbers is: " << gcd;
    return 0;
}