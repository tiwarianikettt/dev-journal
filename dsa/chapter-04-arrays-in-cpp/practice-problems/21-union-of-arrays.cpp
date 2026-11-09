/*Write a program to print the union of two arrays*/

#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    int m = 7;

    int un[n + m];
    int size = 0;

    for(int i = 0; i < n; i++){
        un[size] = arr1[i];
        size++;
    }

    for(int i = 0; i < m; i++){
        bool found = false;
        for(int j = 0; j < size; j++){
            if(arr2[i] == un[j]){
                found = true;
                break;
            }
        }
        if(!found){
            un[size] = arr2[i];
            size++;
        }
    }

    cout << "Union of the two arrays are: ";
    for(int i = 0; i < size; i++){
        cout << un[i] << " ";
    }
    return 0;
}