/*Write a program to return the number of odd elements in the array*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 56, 34, 43, 67, 89, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count =  0;

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    cout << "Number of odd elements in the array are: " << count;
    return 0;
}