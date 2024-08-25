int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	for(int i = 0; i < n; i++) {
		if(arr[i] > x) {
			return i;
		}
	}
	return n;	
}
