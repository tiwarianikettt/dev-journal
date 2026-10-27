### Comments:

Comments are the sentences or texts that the compiler can’t read

In C++ we can write comments by two methods:

1. Single line comments- By using “ // “ at the start of the comment.
2. Multi line comments- Here we can write our comments in multiple lines by using                   “ /* _________________ */ “.

### Data Types:

| Type | Value | Size |
| --- | --- | --- |
| int | Integer | 4 bytes |
| float | Decimal | 4 bytes |
| char | Characters | 1 byte |
| bool | True / False | 1 byte |
| void | No value | NA |

### Data Type Modifiers

| Type | Size |
| --- | --- |
| short int | 2 bytes |
| long int | 4-8 bytes |
| long long int | 8 bytes |
| double | 8 bytes |
| long double | 8-12 bytes |

### Variables

A storage location with a named data type.

### Identifiers

Used to represent the variables.

Rules to give name Identifiers:

1. We can use any character A-Z, a-z, 0-9 or any special character.
2. Starting letter can only be “ _ “ or A - Z or a - z.
3. We can not start the name of the identifier by any number or special character.
4. CPP is a case sensitive language- data & Data are two different identifiers.

#### Difference Between Variable & Data types

| Parameter | Variable | Identifier |
| --- | --- | --- |
| Definition | A storage location in memory that holds the data | A name given to the element to identify the variable |
| Example | `int age = 20;` (The `int` memory space allocated for `20`). | `age` (The literal string of characters naming the variable). |

### Operators:

1. Arithmetic Operator: +, -, *, /, %
2. Relational Operator: ==, <, ≤, >,≥, ≠
3. Logical Operator: or ( | | ), and ( && ), not ( ! )
4. Bitwise Operators: &, |, ^, ~, <<, >>

### Operator Precedence in C++:

Operators with **higher precedence** are evaluated before operators with lower precedence.

Important precedence order from highest priority to lowest priority.

| Priority | Operators | Meaning |
| --- | --- | --- |
| 1 | `()` | Parentheses |
| 2 | `++` `--` | Increment / Decrement |
| 3 | `*` `/` `%` | Multiplication, Division, Modulus |
| 4 | `+` `-` | Addition, Subtraction |
| 5 | `<<` `>>` | Bitwise Shift |
| 6 | `<` `<=` `>` `>=` | Relational |
| 7 | `==` `!=` | Equality |
| 8 | `&` | Bitwise AND |
| 9 | `^` | Bitwise XOR |
| 10 | `|` | Bitwise OR |
| 11 | `&&` | Logical AND |
| 12 | `||`  | Logical OR |
| 13 | `=` `+=` `-=` etc. | Assignment |

### Keywords:

Keywords are reserved words that have predefined meanings in C++ and cannot be used as identifiers.

Examples: int, float, if, else, while, for, return, class.

### Template of C++ program

```cpp
#include <iostream>
using namespace std;

int main() {
	// Your main code goes here.
	return 0;
}

/* Breakdown:
1. #include <iostream>- This is a preprocessor directive. It tells the compiler to include the Input/Output Stream  library.

2. using namespace std- This allows you to skip typing std:: before cout and endl.

3. int main() { __ }- This defines the main function, which is the absolute entry point of every C++ program. Execution begins here. The int means this function must return an integer value when it finishes.
```

### Initialization of any variable

```cpp
// syntax:

data_type identifier = value;
```

```cpp
// Example:

int age = 19;
```

### Declaring of any variable:

```cpp
// syntax:

data_type identifier;
```

```cpp
// Example:

int age;
```

#### Declaring multiple variables:

```cpp
// syntax:

data_type identifier_1;
data_type identifier_2;

// shorthand:

data_type identifier_1, indentifier_2;
```

```cpp
// Example:

int age;
int marks;
int house_no;

// Example:

int age, marks, house_no;
```

### Scopes in C++:

Scope is the region where we can access the particular declared variables and some variables are not accessible outside their scope.

#### Local Scope:

Any variable declared or initialized with in the curly brackets of any loop of conditional statements are local score variables.

these type of variable are not accessible outside the particular loop or condition.

#### Global Scoped:

Any variable which is declared globally in the program in the main function then that variable will be accessible anywhere we want.

```cpp
#include <iostream>
using namespace std;

int main(){  
    int n; // This is a Globally Scoped variable and we can access it anywhere we want to inside our program.
    cout << "Enter the number: ";
    cin >> n;

    if(n > 18) {
        int age = n; // Here this age variable is local scoped and it willnot be   accessible outside this if condition.
        cout << age;
    }

    cout << age; // This will show an error as we are using it outside the scope.

    return 0;
}
```

### Printing in C++

We use cout keyword for printing in C++.

```cpp
// syntax:

cout << "// Writer here what you want to print.";
```

```cpp
// Example:

#include <iostream>
using namespace std;

int main() {
	cout << "Hello World" << endl;
}

// endl is used to end the line anything we will do after this will come in the next line.

/*
Output:
Hello World
*/
```

### Taking inputs in C++

For taking inputs we use cin keyword.

```cpp
// syntax:

cin >> identifier;
```

```cpp
// Example:

#include <iostream>
using namespace std;

int main() {
	int age;
	cin >> age;
	cout << "You are " << age << " years old." << endl;
	return 0;
}

/*
Output:
19
You are 19 years old.
*/
```

#### Taking multiple inputs in C++

```cpp
// syntax:

cin >> identifier_1;
cin >> identifier_2;

// Shorthand:

cin >> identifier_1 >> identifier_2;
```

```cpp
// Example:

#include <iostream>
using namespace std;

int main() {
	int age, marks;
	cin >> age;
	cin >> marks;
	cout << "You are " << age << " years old and have scored " << marks << " marks." << endl;
	return 0;
}

// Example:

#include <iostream>
using namespace std;

int main() {
	int age, marks;
	cin >> age >> marks;
	cout << "You are " << age << " years old and have scored " << marks << " marks." << endl;
	return 0;
}
```

### Drawbacks of cin keyword:

It does not count take spaces or enter as the member of the variable. I want to enter the spaces we can replace cin with cin.get().