Function in C++ language are the systematic block of code that performs the specific tasks as per given by the user.

Consider it as- If you want to do something repeatedly in you code like you have to add two numbers again and again in a specific code :

```cpp
// Longer way is you manually type the the code again and again like this:
#include <iostream>
using namespace std;

int main(){
	int n = 10;
	int m = 12;
	int c = n + m;
	cout << c;
	return 0;
}

// Quicker way is that you can make a function for this:
#include <iostream>
using namespace std;

int sum(int a, int b){
	int c = a + b;
	cout << c;
}

int main(){
	sum(10, 20);
	return 0;
}
```

```cpp
// Syntax:
return_type function_name (arguments){
		/*code*/
}

// Example:
int product(int n, int m){
	int k = n * m;
	cout << k;
}
```

### Calling of a function:

Calling a function means to use the function inside the code as we used sum function in the above code example in the main function of our code.