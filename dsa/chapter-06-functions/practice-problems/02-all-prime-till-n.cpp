/*Write a function to print all prime numbers till n*/

#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    } else{
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
}

void printprime(int n){
    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers till " << n << " are: ";
    printprime(n);
    cout << endl;

    return 0;
}