class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n - 1;
        int mid = start + ((end - start)/2);
        while(start <= end) {
            if(target == nums[mid]) {
                return mid;
            } else if(target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + ((end - start)/2);
        }
        return -1;
    }
};
