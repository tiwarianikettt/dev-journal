/*Given an array find the number that is repeating most in the array, if the array has more than 1 numbers repeating
same number of times then return the smallest of them */

#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 2, 3, 3, 4, 1, 5, 5, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_count = 0;
    int num;

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > max_count){
            max_count = count;
            num = arr[i];
        }else if(max_count == count && arr[i] < num){
            num = arr[i];
        }
    }

    cout << "The smallest and most repeating element in the array is: " << num;
    return 0;
}