/*Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array.
The output can be returned in any order.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 1, 1, 3, 2, 2};
    int n = nums.size();

    vector<int> hash(100,0);
    for(int i = 0; i < n; i++){
        hash[nums[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(hash[i] > n / 3){
            cout << i << " ";
        }
    }

    return 0;
}