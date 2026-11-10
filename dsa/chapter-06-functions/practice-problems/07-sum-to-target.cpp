/*Write a function which reads the target value and an array and returns all the pairs which sums to the target value.*/

#include <iostream>
using namespace std;

int sumTarget(int length, int arr[], int target){
    bool pair_found = false;
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(arr[i] + arr[j] == target){
                pair_found = true;
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
    if(!pair_found){
            cout << "No such pair found for the given target value.";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    sumTarget(n, arr, target);
    return 0;
}