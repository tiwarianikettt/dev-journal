/*Write a program to print the largest number  of the array*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {2, 1, 44, 3, 6, 7, 4, 100, 77};
    int size = sizeof(arr) / sizeof(arr[0]);

    int big = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }

    cout << "The biggest number in the array is: " << big;
}