/*Write a program to move all zeroes in the array to the end*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 0, 4, 0, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }

    cout << "Modified array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}