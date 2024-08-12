#include <iostream>
#include <vector>
using namespace std;

unsigned int countSetBits(unsigned int num) {
    cout << "Enter the number: ";
    cin >> num;
    unsigned int count = 0;
    while(num) {
        count += (num & 1);
        num = (num >> 1);
    }
    cout << count;
    return 0;
}

int main() {
    unsigned int num;
    countSetBits(num);
}
