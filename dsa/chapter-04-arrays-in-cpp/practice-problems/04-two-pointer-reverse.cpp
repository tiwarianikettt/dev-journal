/* Write a program to print the reversed array by using two pointer approach */

#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 1, 44, 3, 6, 7, 4, 100, 77};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = size - 1;

    cout << "Original array: ";
    for(int k = 0; k < size; k++){
        cout << arr[k] << " ";
    }

    cout << endl;

    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Reversed array: ";
    for(int k = 0; k < size; k++){
        cout << arr[k] << " ";
    }

    return 0;
}