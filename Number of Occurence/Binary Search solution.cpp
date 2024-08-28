//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int start = 0;
	    int end = n - 1;
	    int first = -1;
	    int mid;
	    while(start <= end) {
	        mid = start + ((end - start)/2);
	        if(arr[mid] == x) {
	            first = mid;
	            end = mid - 1;
	        } else if(arr[mid] > x) {
	            end = mid - 1;
	        } else {
	            start = mid + 1;
	        }
	    }
	    int Start = 0;
	    int End = n - 1;
	    int last = -1;
	    int Mid;
	    while(Start <= End) {
	        Mid = Start + ((End - Start)/2);
	        if(arr[Mid] == x) {
	            last = Mid;
	            Start = Mid + 1;
	        } else if(arr[Mid] > x) {
	            End = Mid - 1;
	        } else {
	            Start = Mid + 1;
	        }
	    }
	    int count = 0;
	    if(first == -1) {
	        count = 0;
	    } else {
	        count = (last - first) + 1;
	    }
	    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
