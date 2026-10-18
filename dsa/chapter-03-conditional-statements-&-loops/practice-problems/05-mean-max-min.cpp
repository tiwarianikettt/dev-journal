// From the list of N numbers find the mean of N numbers, maximum and minimum number from the list of N numbers.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, num;
    cout << "Enter the number of elements: ";
    cin >> N;

    int maxNum = INT_MIN;
    int minNum = INT_MAX;

    int sum = 0;
    for(int i = 1; i <= N; i++) {
        cout << "Enter the number " << i << ": ";
        cin >> num;
        if(num > maxNum) {
            maxNum = num;
        }
        if(num < minNum) {
            minNum = num;
        }
        sum += num;
    }
    
    int mean = sum / N;
    cout << "Mean of given numbers: " << mean << endl;
    cout << "Maximum Number: " << maxNum << endl;
    cout << "Minimum Number: " << minNum << endl;
    return 0;

}