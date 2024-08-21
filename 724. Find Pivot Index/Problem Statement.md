# [724. Find Pivot Index](https://leetcode.com/problems/find-pivot-index/description/)

<p>
  Given an array of integers <code>nums</code>, calculate the <b>pivot index</b> of this array.
</p>
<p>
  The pivot index is the index where the sum of all the numbers <b>strictly</b> to the left of the index is equal to the sum of all the numbers strictly to the index's right.
</p>
<p>
  If the index is on the left edge of the array, then the left sum is <code>0</code> because there are no elements to the left. This also applies to the right edge of the array.
</p>
<p>
  Return the <b><i>leftmost pivot index</i></b>. If no such index exists, return <code>-1</code>.
</p>



    Example 1:

    Input: nums = [1,7,3,6,5,6]
    Output: 3
    Explanation:
    The pivot index is 3.
    Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
    Right sum = nums[4] + nums[5] = 5 + 6 = 11

    
    Example 2:
    
    Input: nums = [1,2,3]
    Output: -1
    Explanation:
    There is no index that satisfies the conditions in the problem statement.

    
    Example 3:
    
    Input: nums = [2,1,-1]
    Output: 0
    Explanation:
    The pivot index is 0.
    Left sum = 0 (no elements to the left of index 0)
    Right sum = nums[1] + nums[2] = 1 + -1 = 0
