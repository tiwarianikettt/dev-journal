/*Given an array of integers nums and an integer target. Return the indices(0 - indexed) of three elements in nums such that,
they add up to target.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {2, -2, 0, 3, -3, 5};
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            for(int k = j + 1; k < v.size(); k++){
                if(v[i] + v[j] + v[k] == target){
                    cout << i << ", " << j << ", " << k << endl;
                }
            }
        }
    }
    return 0;
}