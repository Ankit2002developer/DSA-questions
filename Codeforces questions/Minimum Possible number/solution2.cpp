#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); ++i) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;

        // Ensure we don't create leading zeros
        if (i == 0 && inverted == 0) {
            continue;
        }

        // Replace the digit if the inverted value is smaller
        if (inverted < digit) {
            x[i] = inverted + '0';
        }
    }

    cout << x << endl;
    return 0;
}
