/*Given an array of binary numbers write a program that returns which binary number is the most repeated one consecutively*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array(using 0 and 1 only): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int count_0 = 0;
    int max_0 = 0;
    int count_1 = 0;
    int max_1 = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0 and arr[i] != 1){
            cout << "Given array is not a binary array";
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] = 0){
            count_0++;
            count_1 = 0;

            if(count_0 > max_0){
                max_0 = count_0;
            }
        }else{
            count_1++;
            count_0 = 0;

            if(count_1 > max_1){
                max_1 = count_1;
            }
        }
    }

    if(max_0 > max_1){
        cout << "There are maximum number of consecutive 0 than 1: " << max_0;
    }

    else if(max_0 < max_1){
        cout << "There are maximum number of consecutive 1 than 0: " << max_1;
    }

    else{
        cout << "The number of consecutive 0 an d1 are both equal in number: " << max_0;
    }
    return 0;
}