/*Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. 
Each element in the result must appear as many times as it appears in both arrays; that is,
if an element appears x times in nums1 and y times in nums2, it should appear min(x, y) times in the result.
The intersection of two arrays is an array where all values are present in both arrays. 
Since both input arrays are sorted, the resulting intersection array should also be in sorted order.*/

#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int arr2[] = {2, 4, 6, 8};
    int m = 4;

    cout << "Intersections of the given array is: ";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
    return 0;
}