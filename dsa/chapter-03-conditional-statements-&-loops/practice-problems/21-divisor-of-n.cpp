/*Take a number as input from the user and return all its divisor in an array.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int arr[n];
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            arr[count] = i;
            count++;
        }
    }

    cout << "Divisors of the entered number are: ";
    for(int i = 0; i < count; i++){
        cout << arr[i] << " ";
    }
    return 0;
}