/*Write a program which returns the largest digit of the number*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int num, largest;

    while(n != 0){
        num = n % 10;

        if(num > largest) {
            largest = num;
        }

        n = n / 10;
    }
    

    cout << "The largest digit of the number is: " << largest;
    return 0;
}