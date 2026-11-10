/*Write a program to print the largest number from the array*/

#include <iostream>
#include <climits>
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

    int largest = arr[0];
    int second_largest = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
    }
    cout << "The second largest element of the array is: " << second_largest;
}