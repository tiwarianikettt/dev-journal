/*Given an integer array nums, rotate the array to the left by k    .*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;

    k = k % n;

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i - k] = arr[i];
    }

    for(int i = n - k; i < n; i++){
        arr[i] = temp[i - (n - k)];
    }

    cout << endl;
    cout << "Modified array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}