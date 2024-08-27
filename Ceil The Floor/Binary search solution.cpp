int findFloor(vector<int> &a, int n, int x) {
	int start = 0;
	int end = n - 1;
	int mid;
	int floor = -1;
	while(start <= end) {
		mid = start + ((end - start) / 2);
		if(a[mid] <= x) {
			floor = a[mid];
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return floor;
}

int findCeil(vector<int> &a, int n, int x) {
	int start = 0;
	int end = n - 1;
	int mid;
	int ceil = -1;
	while(start <= end) {
		mid = start + ((end - start) / 2);
		if(a[mid] >= x) {
			ceil = a[mid];
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return ceil;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int floor = findFloor(a, n, x);
	int ceil = findCeil(a, n, x);
	pair <int, int> p;
	p.first = floor;
	p.second = ceil;
	return p;
}
