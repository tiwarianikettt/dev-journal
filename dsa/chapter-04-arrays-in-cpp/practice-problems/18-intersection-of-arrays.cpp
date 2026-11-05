/*Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. 
Each element in the result must appear as many times as it appears in both arrays; that is,
if an element appears x times in nums1 and y times in nums2, it should appear min(x, y) times in the result.
The intersection of two arrays is an array where all values are present in both arrays. 
Since both input arrays are sorted, the resulting intersection array should also be in sorted order.*/

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter the length of two arrays: ";
    cin  >> n1 >> n2;

    int nums1[n1], nums2[n2];
    cout << "Enter the elements of first array: ";
    for(int i = 0; i < n1; i++){
        cin >> nums1[i];
    }
    cout << endl;

    cout << "Enter the elements of second array: ";
    for(int i = 0; i < n2; i++){
        cin >> nums2[i];
    }
    cout << endl;

}