/*Write a program to check whether the input number is palindrome or not */

#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cout << "Enter the number: ";
    cin >> n;

    int original = n;

    bool palindrome = false;
    int reverse = 0;

    while(n != 0){
        int num = n % 10;
        reverse = reverse * 10 + num;
        n = n / 10;
    }

    cout << "Reversed number: " << reverse << endl;

    if(original == reverse){
        cout << "The given number is palindrome";
    }else{
        cout << "The given number is not palindrome";
    }
    return 0;
}