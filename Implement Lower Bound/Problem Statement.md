# [Implement Lower Bound](https://www.naukri.com/code360/problems/lower-bound_8165382?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries)
<p>
  <b>Problem Statement</b>
</p>
<p>
  You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'. For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'.If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.
</p>

    Sample Input 1:
    6
    1 2 2 3 3 5
    0
    
    
    Sample Output 1:
    0
    
    
    Explanation Of Sample Input 1 :
    Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.
    
    
    Sample Input 2:
    6
    1 2 2 3 3 5
    2
    
    
    Sample Output 2:
    1
    
    
    Sample Input 3:
    6
    1 2 2 3 3 5
    7
    
    
    Sample Output 3:
    6
