/*Write a program to count the number of digits by taking number as input from the user */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;

    do{
        n = n / 10;
        count++;
    }while(n != 0);

    cout << "Number of digits are: " << count;

    return 0;
}