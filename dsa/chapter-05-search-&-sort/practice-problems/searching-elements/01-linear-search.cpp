/*Write a program to search a number inside an array and return it's index*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 7, 4, 6, 23, 5, 6, 10, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n;
    cout << "Enter the element to search: ";
    cin >> n;


    for(int i = 0; i < size; i++){
        if(arr[i] == n){
            cout << "Element " << n << " found at index: " << i;
            break;
        }
    }
    
    return 0;
}