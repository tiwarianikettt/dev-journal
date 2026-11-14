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

### Pass by Value:

In case of pass by value a copy of that value or variable is what we work on and the manipulations we do on that variable is not permanent and is locally coped not globally scoped.

### Pass by Reference:

In case of pass by reference the variable and value with their memory address gets passes therefore the manipulations we apply on it is permanent change. Array manipulations are also pass by reference.

### Vectors

#### Why Vectors Exist

A normal array has a fixed size. If you write `int a[5]`, you can never store a 6th element, and if you only use 2 elements, the rest of the space is wasted.

A vector is a dynamic array: it grows and shrinks automatically at runtime, and you don't manage memory yourself. It is part of the STL (Standard Template Library).

```cpp
#include <vector>
using namespace std;
```

Internally, a vector stores its elements in **one continuous block of memory**, just like an array. That is why `v[i]` is O(1) and vectors are fast in practice.

#### Creating a Vector

```cpp
vector<int> v;                  // empty, size 0
vector<int> v(5);               // 5 elements, all 0
vector<int> v(5, 10);           // 5 elements, all 10
vector<int> v = {1, 2, 3};      // with values
vector<int> b(a);               // b is a copy of a
```

The type goes inside `<>`. You can make vectors of `int`, `char`, `string`, `double`, `pair`, or even other vectors.

> **Important:** `vector<int> v(5)` already has 5 elements (all zeros). If you then do `v.push_back(1)`, the size becomes **6**, not 5.

#### How a Vector Grows: Size vs Capacity

This is the most important concept for interviews and exams.

- `size()` = how many elements are actually stored
- `capacity()` = how many elements it can hold before needing more memory

When you `push_back` and the vector is full (`size == capacity`):

1. It allocates a new, bigger block (usually **double** the old capacity)
2. It copies all existing elements into the new block
3. It frees the old block

Capacity typically goes 1 → 2 → 4 → 8 → 16 ...

Copying is expensive, but happens rarely. Averaged over many insertions, each `push_back` costs constant time. That is why it is **O(1) amortized**, not plain O(1). A single `push_back` can occasionally cost O(n).

- `reserve(n)` pre-allocates capacity for `n` elements. It does **not** change `size()`. Use it when you know the final size.
- `resize(n)` actually changes the number of elements (new ones are filled with 0).

#### Adding and Removing Elements

| Function | What it does | Time |
|---|---|---|
| `push_back(x)` | Add `x` at the end | O(1) amortized |
| `pop_back()` | Remove last element (returns nothing) | O(1) |
| `insert(pos, x)` | Insert `x` at `pos`, shift the rest right | O(n) |
| `erase(pos)` | Remove element at `pos`, shift the rest left | O(n) |
| `erase(first, last)` | Remove range `[first, last)` | O(n) |
| `clear()` | Remove all elements (capacity usually stays) | O(n) |
| `emplace_back(x)` | Construct directly in the vector | O(1) amortized |

```cpp
v.insert(v.begin() + 2, 99);        // insert 99 at index 2
v.erase(v.begin() + 1);             // remove index 1
v.erase(v.begin(), v.begin() + 3);  // remove indices 0, 1, 2
```

**Rule to remember:** operations at the **end** are cheap; operations at the **front or middle** are expensive because elements must shift.

#### Accessing Elements

```cpp
v[i]        // direct access, no bounds checking
v.at(i)     // bounds-checked, throws exception if invalid
v.front()   // first element
v.back()    // last element
```

If you use `v[i]` with an invalid index, the behavior is **undefined**: it may crash, print garbage, or seem to work. `at()` is safer but slightly slower.

#### Traversing a Vector

```cpp
// index based
for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

// range based (cleanest for reading)
for (int x : v) cout << x << " ";

// range based with reference (needed to modify)
for (int &x : v) x = x * 2;

// iterator
for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
```

Without the `&`, `x` is just a copy, so changing it does not change the vector.

#### Iterators

An iterator is like a pointer to an element of the vector.

- `begin()` → first element
- `end()` → position **after** the last element (not the last element itself)
- `rbegin()` / `rend()` → reverse traversal
- `*it` → value at the iterator

You can do arithmetic on vector iterators, like `v.begin() + 3`. That is why `insert` and `erase` take iterators instead of indices.

#### Useful Algorithms with Vectors

Need `#include <algorithm>` (and `<numeric>` for `accumulate`).

```cpp
sort(v.begin(), v.end());                   // ascending, O(n log n)
sort(v.begin(), v.end(), greater<int>());   // descending
reverse(v.begin(), v.end());
*max_element(v.begin(), v.end());           // largest value
*min_element(v.begin(), v.end());           // smallest value
accumulate(v.begin(), v.end(), 0);          // sum
count(v.begin(), v.end(), x);               // occurrences of x
find(v.begin(), v.end(), x);                // iterator, or end() if not found
```

**For sorted vectors only:**

```cpp
binary_search(v.begin(), v.end(), x);   // true / false
lower_bound(v.begin(), v.end(), x);     // first element >= x
upper_bound(v.begin(), v.end(), x);     // first element > x
```

To get an index from an iterator: `it - v.begin()`

#### Removing duplicates

```cpp
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```

`unique` only removes **adjacent** duplicates, which is why you sort first. It moves the duplicates to the end and returns an iterator to where they start; `erase` then deletes them.

#### 2D Vectors

```cpp
vector<vector<int>> g(3, vector<int>(4, 0));   // 3 rows, 4 columns, all 0
g[1][2] = 5;
```

- `g.size()` → number of rows
- `g[0].size()` → number of columns
- Each row is its own vector, so rows can have different lengths (**jagged array**)
- Add a row: `g.push_back({1, 2, 3});`

#### Passing Vectors to Functions

```cpp
void f(vector<int> v)           // full copy, slow, original unchanged
void f(vector<int> &v)          // no copy, fast, can modify original
void f(const vector<int> &v)    // no copy, fast, cannot modify
```

In DSA problems, **always pass by reference** (use `const` if you are not modifying). Passing by value copies the whole vector on every call, which can cause **TLE**, especially in recursion.

#### Common Mistakes

1. Accessing `v[i]` when `i >= v.size()`. No error is shown, but behavior is undefined.
2. Using `v.size() - 1` on an empty vector. `size()` is unsigned, so `0 - 1` becomes a huge positive number. Safer: `int n = v.size();`
3. Modifying a vector (`push_back`, `erase`, `insert`) while looping over it. Iterators can become invalid.
4. Forgetting `&` when passing to functions, which causes copies.
5. Forgetting that `vector<int> v(n)` already contains `n` elements, then using `push_back` and ending up with extra zeros at the front.

#### Vector vs Array

| Point | Array | Vector |
|---|---|---|
| Size | Fixed | Dynamic |
| Memory | Usually stack (local arrays) | Data lives on the heap |
| Built-in functions | None | `size()`, `push_back()`, etc. |
| Passing to functions | Decays to pointer | Full object (copied unless reference) |
| Safety | No bounds checking | `at()` for bounds checking |
| Speed | Marginally faster | Negligible difference in most cases |
