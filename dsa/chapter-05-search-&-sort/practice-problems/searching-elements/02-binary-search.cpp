/*Write a program to search a given element by using binary search algorithm*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 15, 23, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;

    bool found = false;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            cout << "Element found at: " << mid;
            found = true;
            break;
        }else if(key > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    if(!found){
        cout << "Element not found...";
    }
    return 0;
}