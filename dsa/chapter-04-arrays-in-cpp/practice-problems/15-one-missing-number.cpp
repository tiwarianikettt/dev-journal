/*Given an integer array of size n containing distinct values in the range from 0 to n (inclusive),
return the only number missing from the array within this range.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << endl;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }

    int arrSum = 0;
    for(int i = 0; i < n; i++){
        arrSum += arr[i];
    }

    if(sum == arrSum){
        cout << "The missing number is: 0" << endl;
    } else{
        cout << "The missing number is: " << sum - arrSum << endl;
    }

    return 0;
}