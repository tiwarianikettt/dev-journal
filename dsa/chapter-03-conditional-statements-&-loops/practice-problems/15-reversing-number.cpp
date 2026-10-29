/* Write a program to display the reverse of a given input number */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Original number: " << n << endl;

    int reverse = 0;

    while(n != 0){
        int num = n % 10;
        reverse = reverse * 10 + num;
        n = n / 10; 
    }

    cout << "Reversed number: " << reverse;
}