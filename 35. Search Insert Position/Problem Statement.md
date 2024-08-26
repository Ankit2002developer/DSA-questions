# [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/description/)
<p>
  Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
</p>
<p>
  You must write an algorithm with <code>O(log n)</code> runtime complexity.
</p>

    Example 1:
    Input: nums = [1,3,5,6], target = 5
    Output: 2
    
    Example 2:
    Input: nums = [1,3,5,6], target = 2
    Output: 1
    
    Example 3:
    Input: nums = [1,3,5,6], target = 7
    Output: 4

<p>
  <b>Constraints</b>:

- <code>1 <= nums.length <= 104</code>
- <code>104 <= nums[i] <= 104</code>
- <code>nums</code> contains distinct values sorted in ascending order.
- <code>104 <= target <= 104</code>
</p>
