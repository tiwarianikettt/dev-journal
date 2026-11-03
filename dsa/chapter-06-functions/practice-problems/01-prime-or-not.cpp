/*Generate a function to check if the given number is prime or not*/

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

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num)){
        cout << num << " is a prime number." << endl;
    } else{
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
