/*Write a program to find the highest occurrence of an element in an array*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {1, 2, 2, 3, 3, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int hash[n] = {0};

    for(int i = 0; i < n; i++){
        hash[nums[i]] += 1;
    }

    int max_frequency = INT_MIN;
    int max_element = -1;

    for(int i = 0; i < n; i++){
        if(hash[i] > max_frequency){
            max_frequency = hash[i];
            max_element = i;
        }
    }

    cout << "The highest occuring element in the given array is: " << max_element;

    return 0;
}