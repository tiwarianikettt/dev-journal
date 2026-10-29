Arrays are the the linear data structures that stores value of specific data types in a contiguous memory locations.

### Indexing in array:

Every element of an array has its own index depending on its position the index goes from 0 to (n - 1). where n is the number of elements in the array.

```cpp
//Example:
int arr[5] = {1, 2, 3, 4, 5]

/* Here index of the elements of array will be:
index:   0 1 2 3 4
element: 1 2 3 4 5
*/
```

### Length of an array:

It tells us how many elements we can store in that particular array. Length of an array goes from 1 to n, where n is number of elements in the array.

```cpp
//Example:
int arr[5] = {1, 2, 3, 4, 5]

// Here length of the array is: 5
```

If we want to check the size of an array we have in built function i.e.

```cpp
// sizeof()

// syntax:
sizeof(array_name);

// Example:
int arr[5] = {1, 2, 3, 4, 5};
cout << sizeof(arr);

/* Output:
20
*/

/* Here we have an array of 5 elements bu the output of size is 30 because this    array is holding the integer elements only and we know that an integer element     holds 4 bytes of memory space mmultiplying it with number of elements gives us the real size of the array */
```

### Declaring an array:

To declare an array we must know the size of that array without entering the size of an array we can not declare an array.

```cpp
// Array declaration:

// syntax:
data_type array_name[size_of_array];

//Example:
int arr[5];

// Here we will have an array that can store 5 integers in it.
```

### Initializing an array:

To initialize the array firstly we will declare the array followed by equal to sign and then we will write the elements of the array in the curly brackets.

```cpp
// Array initialization:

// syntax:
data_type array_name[size_of_array] = {element_seperated_","}

//Example:
int arr[5] = {1, 2, 3, 4, 5};

/* We can also declare the array without giving the size in that case the array will read the elements and assign the size by itself */

// syntax:
data_type array_name[] = {element_seperated_","}

//Example:
int arr[] = {1, 2, 3, 4, 5};
// Here it will automatically asssign the size of the array as 5.
```

If we declare a bigger size to an array and initialized it with less number of elements in that case the rest of  the memory will filled with either garbage value or 0.

### Accessing the elements of an array:

To access an element of an array  we use the indexes.

```cpp
// syntax:
array_name[index_of_the_element];

// Example:
arr[4];

//By using this method we can access the element at 4th index, keeping in mind     that indexing goes from 0 to (n - 1)
```

### User input array:

```cpp
include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Array display: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
```