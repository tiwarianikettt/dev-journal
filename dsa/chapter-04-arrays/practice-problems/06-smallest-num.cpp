/*Write a program to print the smallest number from the array*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {23, 1, 45, 3, 5, 6, 7, 0, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    int small = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }

    cout << "The smallest number in the array is: " << small;

    return 0;
}