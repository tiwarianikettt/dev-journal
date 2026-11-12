/*Given an array of n integers, find the sum of the frequencies of the highest occurring number
and lowest occurring number.*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> v = {4, 4, 5, 5, 6};
    int n = v.size();

    vector<int> hash(100, 0);
    for(int i = 0; i < n; i++){
        hash[v[i]] += 1;
    }

    int max_freq = 0;
    int min_freq = INT_MAX;

    for(int i = 0; i < hash.size(); i++){
        if(hash[i] > 0){
            if(hash[i] > max_freq){
                max_freq = hash[i];
            }

            if(hash[i] < min_freq){
                min_freq = hash[i];
            }
        }
    }

    cout << "Sum of highest and lowest frequency is: " << max_freq + min_freq;
    return 0;
}