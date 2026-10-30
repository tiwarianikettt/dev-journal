/*Write a program to replace the duplicate elements with " _ " and sort the array in such a manner that " _ " comes in the last */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the elements of the array in non-decreasing form: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < size; i++){
        for(int j = 0; j< size; j++){
            if(arr[j] == arr[j + 1]){
                arr[j] = arr[j + 1];
                arr[j + 1] = '_';
            }
        }
    }

    cout << "Modified array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}