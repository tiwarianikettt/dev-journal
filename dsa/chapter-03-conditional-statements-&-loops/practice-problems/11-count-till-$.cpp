/* Write a program which reads the number of characters till you read a $ */

#include <iostream>
using namespace std;

int main() {
    char type;
    cout << "Enter the word: ";
    cin >> type;

    int count = 0;

    while(type != '$'){
        count++;
        cin >> type;
    }
    cout << "Total characters count: " << count << endl;
    return 0;
}