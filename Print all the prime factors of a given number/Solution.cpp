#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime factors of " << num << " are: ";
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            int count = 0;
            for(int j = 2; j < i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }
            if(count == 0) {
                cout << i << " ";
            }
        }
    }
}
