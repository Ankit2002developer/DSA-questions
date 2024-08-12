#include <iostream>
#include <vector>
using namespace std;

bool powerOfTwo(int num) {
    cout << "Enter a number: ";
    cin >> num;
    if(num <= 0) {
        cout << "Enter a positive number" << endl;
        return;
    }
    int x = num;
    bool isPowerOfTwo = 1;
    while(num >= 2) {
        if((num % 2) != 0) {
            isPowerOfTwo = 0;
        }
        num /= 2;
    }
    if(isPowerOfTwo) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int num;
    powerOfTwo(num);
}
