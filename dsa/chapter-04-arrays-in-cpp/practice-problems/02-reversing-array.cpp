/* Write a program to read 10 numbers from the user and display it in reverse order */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Reversed array: ";
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }

    return 0;
}