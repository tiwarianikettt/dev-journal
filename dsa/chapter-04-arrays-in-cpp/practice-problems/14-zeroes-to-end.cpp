/*Write a program to move all zeroes in the array to the end*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << endl;

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(arr[i] == 0 && arr[j] != 0){
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Modified array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}