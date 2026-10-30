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

    
   return 0;
}