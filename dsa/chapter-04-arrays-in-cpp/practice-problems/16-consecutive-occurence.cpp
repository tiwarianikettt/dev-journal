/*Given a binary array nums, return the maximum number of consecutive 1s in the array.
A binary array is an array that contains only 0s and 1s.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array using binary numbers only: ";
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }

    int count = 0;
    int maxCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }
    cout << "The maximum number of consecutive 1s in the array is: " << maxCount << endl;
    return 0;
}