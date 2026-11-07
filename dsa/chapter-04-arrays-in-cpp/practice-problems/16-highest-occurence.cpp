/*Write a program to find the highest occurrence of an element in an array*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the lengthy od array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> n;
    }
    cout << endl;

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int l = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > l){
            l = arr[i];
        }
    }

    int hash[l] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    for(int i = 0; i < n; i++){
        
    }

}