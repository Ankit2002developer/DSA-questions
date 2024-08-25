int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int start = 0;
	int end = n - 1;
	if(arr[end] < x) {
		return n;
	}
	int ans = n;
	int mid = start + ((end - start) / 2);
    while(start <= end) {
		if(arr[mid] >= x) {
			ans = mid;
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid = start + ((end - start) / 2);
	}
	return ans;
}
