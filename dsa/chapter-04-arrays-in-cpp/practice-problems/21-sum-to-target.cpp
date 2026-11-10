/*Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that,
they add up to target.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 2, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " and " << j << " sum to " << target;
            }
        }
    }
    return 0;
}