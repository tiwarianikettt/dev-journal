/*Write a program to return the LCM of the given number*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    for(int i = 1; ; i++){
        if(i % n1 == 0 && i % n2 == 0){
            cout << "The LCM of given two numbers is: " << i;
            break;
        }
    }
    return 0;
}