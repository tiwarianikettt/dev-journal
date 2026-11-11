Pointers are the type of variables which stores the memory addresses of another variables.

### Address of operator

Address of an operator is the place where the variable is stored in the RAM of our device, usually the devices we work on is either 32 bit or 64 bit which is a huge number if we write, therefore it exists as a hexadecimal number.

We can access the address of any variable by using ampersand operator “ & “. 

### Dereferencing operator

Represented by “ * “, its work is to go to the given memory address and retrieve the value stored at that address and return that value.

### Pointer Declaration & Initialization

```cpp
//syntax:
data_type *pointer_name;
/*Here data type is not of the pointer the data type refers to what we are going to store in that memory adderess.*/

// Declaring pointer
int *p;

// Initializing Pointer
int *p = &a; 
//here the pointer will store the memory adderess of the variable a.
```

```cpp
//Example:
int a = 10;
int *p = &a; //Storing memory address

cout << p << endl; //Here we are printing the memory address.
cout << *p; //Here we aare printing the value stored at that memory adderess by using dereferencing operator.

/*Output:
0x61ff08
10
*/
```

If we print the memory address of any kind of data type it will easily return us  the address but if we do  the same for  the char data type it will not be the same thing.

In case of char data type the compiler will return the memory address till it gets the null operator.

### Null Pointer

A pointer which does not holds any address.

```cpp
int *p = nullptr;

// Dereferencing a null pointer can crash the program.
```

### Pointer arithmetic

Their are 4  valid operations of pointer arithmetic that are ++, - -, +, -

In case of array pointer, if we assign a pointer on an array we can have a doubt that the array holds many elements in contiguous memory format so which memory address does the pointer holds, the answer to this is the pointer holds the address of the very first element of the array that is the element on index 0, and by using these pointer arithmetic operations we can switch to other addresses too.

### Pointer to pointer

Pointer to pointer refers to the pointer that stores the address of pre existing pointer which stores a pointer of a variable.

```cpp
int a = 5;
int *p = &a;
int **q = &p; //pointer to pointer

/*We use two star operators in case of pointer to pointer*/

cout << **q;

/*Output:
5
*/
```