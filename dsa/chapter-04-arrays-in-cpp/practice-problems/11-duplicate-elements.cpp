/*Write a program to replace the duplicate elements with " _ " and sort the array in such a manner that " _ " comes in the last */

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 1, 2, 3, 3, 3, 4, 5, 5, 6, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << " modified array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}