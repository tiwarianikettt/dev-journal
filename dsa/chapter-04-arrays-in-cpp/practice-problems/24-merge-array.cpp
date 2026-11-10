/*Write a program to merge an array of length m + n which has m number of elements with array of length n and has n number
of elements*/

#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;

    int arr1[m + n];
    cout << "Enter the elements of arr1: ";
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }
    cout << endl;

    int arr2[n];
    cout << "Enter the elements of arr2: ";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    cout << endl;

    cout << "Original arr1: ";
    for(int i = 0; i < m; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Original arr2: ";
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (j >= 0 && i >= 0){
        if(arr1[i] > arr2[j]){
            arr1[k--] = arr2[j--];
        }else{
            arr1[k--] = arr2[j--];
        }
    }

    while(j >= 0){
        arr1[k--] = arr2[j--];
    }

    cout << "Merged array: ";
    for(int i = 0; i < m + n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    return 0;
}