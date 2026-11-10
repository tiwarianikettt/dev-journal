/* Given an array arr of size n, the task is to check if the given array is sorted in
(ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False. */

#include <iostream>
using namespace std;

int main(){
    int n, i = 0, j = 1;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bool isSorted = true;

    while(j < n){
        if(arr[i] > arr[j]){
            isSorted = false;
            break;
        }
        i++;
        j++;
    }
    
    if(isSorted == true){
        cout << "The array is sorted.";
    } else{
        cout << "The array is not sorted.";
    }
    return 0;
}