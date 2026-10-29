/* Write a program which returns the number of odd digits in the given input number */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;

    while(n != 0){
        int num = n % 10;

        if(num % 2 != 0){
            count++;
        }

        n = n / 10;
    }

    cout << "The number of odd digits in the given number are: " << count;
    return 0;
}