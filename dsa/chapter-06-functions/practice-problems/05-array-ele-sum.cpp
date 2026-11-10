/*Write a function which raeads the array and its length and returns the sum of its elements*/

#include <iostream>
using namespace std;

int sumArray(int arr[], int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the size of  the array: ";
    cin >> n;
    int a[n];

    cout << endl;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << endl;

    cout << "Array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "The sum of the elements of the array is: " << sumArray(a, n);
    return 0;
}