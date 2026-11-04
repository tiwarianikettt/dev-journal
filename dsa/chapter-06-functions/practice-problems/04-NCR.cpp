/*Write a function to calculate NCR for the given values of N and R*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
        return -1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    if(r > n || r < 0){
        cout << "Invalid input: r cannot be greater than n or negative." << endl;
        return -1;
    }else{
        int N = factorial(n);
        int R = factorial(r);
        int NR = factorial(n - r);

        int result = N / (R * NR);
        cout << "NCR for " << n << " and " << r << " is " << result << endl;
    }
}

int main(){
    int n, r;
    cout << "Enter values for N and R: ";
    cin >> n >> r;
    nCr(n, r);
    return 0;
}