/*Given an integer array nums, rotate the array to the left by one.*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;

    k = k % n;

    int temp[n];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i - k] = arr[i];
    }
    
}