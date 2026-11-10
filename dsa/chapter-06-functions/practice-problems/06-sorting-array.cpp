/*Write a function which reads the array and return the sorted array using selection sort method*/

#include <iostream>
using namespace std;

int sortArray(int arr[], int len){
    cout << "Original array: ";
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < len - 1; i++){
        for(int j = i; j < len; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sortArray(arr, n);
    return 0;
}