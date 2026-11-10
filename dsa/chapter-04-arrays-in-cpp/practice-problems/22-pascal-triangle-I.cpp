/*Given two integers r and c, return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.*/

#include <iostream>
using namespace std;

int factorial(int m){
    int fact = 1;
    if(m == 0 || m == 1){
        return fact;
    }else{
        for(int i = 2; i <= m; i++){
            fact *= i;
        }
    }
    return fact;
}

int main(){
    int r, c;
    cout << "Enter the values of n and r with space between both the values: ";
    cin  >> r >> c;

    cout << endl;

    int k = factorial(r - 1) / (factorial(c - 1) * factorial((r - 1) - (c - 1)));
    cout << "The at the given indexes of pascal triangle is: " << k;

    return 0;
}