#include <bits/stdc++.h>
using namespace std;

long long minPossible(long long n) {
    if(n < 10) return n;
    string str = to_string(n);
    long long ans = 0;
    for(int i = 0; i < str.size(); i++) {
        int digit = (int) (str[i] - '0');
        if(i == 0 && digit == 9) digit = digit;
        else if(digit > 4) digit = 9 - digit;
        ans = (long long) (ans * 10 + digit);
        //str[i] = (char) (digit);
    }
    
    return ans;
}

int main() {
    long long n;
    cin >> n;
    cout << minPossible(n);
    return 0;
}
