class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxIndex = 0;
        int max = arr[0];
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};
