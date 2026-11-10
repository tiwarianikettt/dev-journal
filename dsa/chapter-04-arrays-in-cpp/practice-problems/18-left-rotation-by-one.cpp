/*Given an integer array nums, rotate the array to the left by one.*/

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The original array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int temp = arr[0];
    for(int i = 0; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    cout << "The modified array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}