class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n - 1;
        int mid;
        int ans = n;
        while(start <= end) {
            mid = start + ((end - start)/2);
            if(nums[mid] >= target) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
