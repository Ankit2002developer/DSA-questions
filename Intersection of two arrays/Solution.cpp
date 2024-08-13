class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> array;
        int i = 0, j = 0;
        while((i < nums1.size()) && (j < nums2.size())) {
            if(nums1[i] == nums2[j]) {
                int size = array.size();
                if(size==0){
                    array.push_back(nums1[i]);
                }
                else if(array[size-1] != nums1[i]){
                    array.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if(nums1[i] > nums2[j]) {
                j++;
            } else {
                i++;
            }
        }
        return array;
    }
};
