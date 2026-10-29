/* Write a program to return the shortest path to the user */

#include <iostream>
using namespace std;

int main() {
    char direct;
    cout << "Enter the directions: ";
    direct = cin.get();

    int x = 0, y = 0;

    while(direct != '\n'){
        if(direct == 'N' || direct == 'n'){
            y += 1;
        }
        else if(direct == 'S' || direct == 's'){
            y -= 1;
        }
        else if(direct == 'E' || direct == 'e'){
            x += 1;
        }
        else if(direct == 'W' || direct == 'w'){
            x -= 1;
        }
        else{
            cout << "Invalid direction";
        }
        direct = cin.get();
    }
    
    for(int i = 0; i < x; i++){
        cout << "E";
    }

    char dir;
    if(y >= 0){
        dir = 'N';
    } else{
        dir = 'S';
    }

    y = abs(y);
    for(int i = 0; i < y; i++){
        cout << dir;
    }

    if(x <= 0){
        x = abs(x);
        for(int i = 0; i < x; i++){
            cout << 'W';
        }
    }
    return 0;
}