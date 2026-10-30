By sort we mean to arrange the elements of array in specific order, either ascending, descending etc.

For doing this we have certain algorithms that we can use to sort an array.

These algorithms are:

1. Bubble sort
2. Selection sort
3. Insertion sort
4. Merge sort

The se are the main variants that we will be using the most although their are some more algorithms to sort an array but these are used widely.

### Bubble sort:

In this sorting method take an example of a bucket with bubbles in it with our general observations we can say that the biggest bubble will come out of the bucket or will pop first in the bucket.

In bubble sort method firstly the biggest number will take its respective position followed by the other numbers in the order, the time when all the elements will be sorted except the smallest one we can say that the smallest number will already remain at its respective position as rest of all have placed already.

Therefore, we conclude that we need to continue the loop till n - 1 times where n is the number of elements in the array.

Algorithm:

1. Initialize the loop from i = 0 to n - 1. (This loop tells us how many times we need to run the loop)
2. Initialize a nested loop from j = 0 to n - i - 1. (This loop will help us in comparing the elements of the array)
3. Inside this nested loop compare the element at index j with the element at index j + 1.
4. If arr[ j ] > arr[ j + 1 ] then swap the elements.
5. Repeat this same process for n - 1 passes.

```cpp
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array(in any order): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble sorting
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### Selection sort: