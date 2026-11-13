/*Given an integer array nums of size n, return the majority element of the array.
The majority element of an array is an element that appears more than n/2 times in the array.
The array is guaranteed to have a majority element.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1, 1, 1, 2, 1, 2};
    int n = v.size();

    vector<int> hash(100, 0);
    for(int i = 0; i < n; i++){
        hash[v[i]]++;
    }

    for(int i = 0; i < hash.size(); i++){
        if(hash[i] > n / 2){
            cout << "The majority element is the given array is: " << i;
            break;
        }
    }
    return 0;
}