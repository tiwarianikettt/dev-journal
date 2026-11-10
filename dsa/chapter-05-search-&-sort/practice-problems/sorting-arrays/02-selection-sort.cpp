/*Write a program to sort an array by using selection sort algorithm*/

#include <iostream>
using namespace std;

int main(){
   int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array(in any order): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Selection sort
    for(int i = 0; i < n - 1; i++){
        for(int j = i; j < n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

   return 0;
}