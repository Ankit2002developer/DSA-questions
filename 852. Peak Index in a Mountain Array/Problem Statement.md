# [852. Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/description/)

<p>
  You are given an integer mountain array <code>arr</code> of length <code>n</code> where the values increase to a <b>peak element</b> and then decrease.
</p>
<p>
  Return the index of the peak element.
</p>
<p>
  Your task is to solve it in <code>O(log(n))</code> time complexity.
</p>

  
      Example 1:
      Input: arr = [0,1,0]
      Output: 1
      
      Example 2:
      Input: arr = [0,2,1,0]
      Output: 1
      
      Example 3:
      Input: arr = [0,10,5,2]
      Output: 1

# (cpp)
    class Solution {
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int start = 0;
            int end = arr.size()-1;
            int mid = start + (end - start)/2;
            
            while(start <= end) {
                if(arr[mid -1] < arr[mid] && arr[mid] > arr[mid+1]) {
                    return mid;
                }   
                else if(arr[mid] < arr[mid+1]) {
                    start = mid + 1;
                }
                else {
                    end = mid;
                }
                mid = start + (end - start)/2;
            }
            return -1;
        }
    };
