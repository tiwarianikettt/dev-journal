### Sorting of arrays

By sort we mean to arrange the elements of array in specific order, either ascending, descending etc.

For doing this we have certain algorithms that we can use to sort an array.

These algorithms are:

1. Bubble sort
2. Selection sort
3. Insertion sort
4. Merge sort

The se are the main variants that we will be using the most although their are some more algorithms to sort an array but these are used widely.

#### Bubble sort:

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
    int isSwap = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwap = 1;
            }
        }

        if(isSwap == 0){
            break;
        }

        cout << "run\n";
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

#### Selection sort:

Here in this sorting method we select each element one by one and then we compare it with the adjacent element.

after comparison we swap the elements if the first element is smaller than the adjacent element, which results as- the largest number of the array will get sorted and move to the last place of the array.

As we go  through the comparison and swapping process we can conclude that till the time we swap, there will be a time when only one element will left and it will be the smallest element of the array, which we don’t need to sort as it is already sorted.

Therefore, this selection sort method also runs n - 1 times, where n is the number of elements in the array.

Algorithm:

1. Initiate a loop from 0th index of array to n - 1.
2. Add a nested loop from 0 to n - 2 (because as we move forward the last elements will already get sorted)
3. Here we will compare the adjacent elements of the array 
4. If the first element is bigger than the adjacent element then we will swap both the elements.
5. After swapping we will repeat the process n - 1 times 

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

    //Selection sort
    for(int i = 0; i < n - 2; i++){
        for(int j = i; j <= n - 1; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

   return 0;
}
```

#### Insertion Sort:

### Searching of an element

To search an element in an array what we basically do is we check the array throughout and if the target value matches with any of the element of the array we return the index of that element.

Their are several ways to search for the element:

1. Linear Search
2. Binary Search

#### Linear Search:

In case of linear search we traverse the array elements one by one till the target value matches with any one of the array elements and then we return the index of that particular array element.

Algorithm:

1. Read the array and the target value.
2. Start a loop for the array from index 0 to n - 1 (where n is the length of the array).
3. Inside the loop check the condition if any array element matches with the target value.
4. If matches, return the index. 

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 7, 4, 6, 23, 5, 6, 10, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n;
    cout << "Enter the element to search: ";
    cin >> n;

    for(int i = 0; i < size; i++){
        if(arr[i] == n){
            cout << "Element " << n << " found at index: " << i;
            break;
        }
    }
    
    return 0;
}
```

#### Binary Search:

In case of binary search we don’t check all the elements of the array as we did in the linear search.

Here we find the middle index first and according to the middle index and the value at the middle index we proceed further as per the below written algoriithm

Algorithm:

1. Read the array, the length of the array & the target value.
2. Initiate with three variables- start = 0, end = n - 1 & mid = (start + end) /  2.
3. Check if the value at middle of the index matches with the target value.
4. if not, then check whether the target value is bigger than or smaller than value at the middle index.
5. If the value is bigger then start = mid + 1.
6. If the value is smaller then high = mid - 1.
7. Check the conditions and return the index of the element.

```cpp
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 15, 23, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;

    bool found = false;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            cout << "Element found at: " << mid;
            found = true;
            break;
        }else if(key > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    if(!found){
        cout << "Element not found...";
    }
    return 0;
}
```