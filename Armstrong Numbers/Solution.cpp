//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int sum = 0;
        int numberOfDigits = log10(n) + 1;
        int num = n;
        while(num > 0) {
            int digit = num % 10;
            sum += pow(digit, numberOfDigits);
            num /= 10;
        }
        if(sum == n) {
            return "true";
        } else {
            return "false";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
