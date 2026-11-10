/*Write a program to return the sum of all the elements of the array*/

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 5, 43, 89, 100, 56, 33};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    cout << "The sum of elements of the array is: " << sum;
    return 0;
}