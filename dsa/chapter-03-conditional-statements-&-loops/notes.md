### Conditional Statements

**Conditional statements** allow your program to make decisions and execute different blocks of code based on whether a condition is `true` or `false`. They form the core logic of decision-making in programming.

#### **The `if` Statement**

It executes a block of code **only if** the specified condition is true.

```cpp
// syntax:

if(condition) {
	/* code */
}

// Example:

int score = 85;
if (score >= 50) {cout << "You passed!" << endl;
}
```

#### **The `if-else` Statement**

When the if condition become false we use the else statement.

```cpp
// syntax:

if (condition) {
	/* code */
} else {
		/* code */
}

// Example:

int age = 16;
if (age >= 18) {
	cout << "You can vote." << endl;
} else {
		cout << "You are too young to vote." << endl;
}
```

#### **The `if - else if - else` Ladder**

Used when we have more than two conditions

```cpp
int speed = 75;
if (speed > 80) {
	cout << "Reckless driving!" << endl;
}else if (speed >60) {
		cout << "Speeding ticket." << endl;
		}else {
			cout << "Safe speed." << endl;
```

### Loops

**loops** are used to execute a block of code repeatedly as long as a specified condition remains true. They save you from writing the exact same code lines multiple times.

#### The for loop

By using the initialization, condition & updation as parameters we use the for loop when we exactly know how many times we want to repeat our loop.

```cpp
// syntax

for(initialization; condition; updation) {
	/* code */
}

// Example:

for(int i = 0; i < 5; i++) {
	cout << i << " ";
}

/*
Output:
0 1 2 3 4
*/
```

#### The while loop

Used when we don’t know the number of iterations and works same as for loop.

```cpp
// syntax:

while(condition) {
	/* code */
}

// Example:

int i = 1;
while(i < 5) {
	cout << i << " ";
	i++;
}

/*
Output:
1 2 3 4
*/
```

#### The do-while loop

This is a special type of loop where the code will execute at least once doesn’t matter if the condition inside the while is  true or false.

```cpp
// syntax:

do {
	/* code */
} while(condition);

// Example:

int age;
cin >> age;
do{
	cout << "You are eligible to vote." << endl;
} while(age >= 18);

/*
Output:
17
You are eligible to vote.
*/
```

### Loop control statements:

1. break: It immediately terminates the entire loop and jumps to the code below the loop.
2. continue: Skips the rest of the current iteration and jumps straight to the next evaluation/step of the loop.