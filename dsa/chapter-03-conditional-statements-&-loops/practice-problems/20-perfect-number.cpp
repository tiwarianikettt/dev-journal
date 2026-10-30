/*You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number,
otherwise, return false.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPerfect = true;
    int sum = 0;

    for(int i = 1; i < n; i++){
        if(6 % i == 0){
            sum += i;
        }
    }
    if(n != sum){
        isPerfect = false;
    }
    cout << "The sum of the divisor of the given number is: " << sum << endl;
    cout << "Is the number perfect: " << isPerfect;
    return 0;
}