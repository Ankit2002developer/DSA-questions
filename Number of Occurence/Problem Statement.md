# [Number of Occurence](https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence)
<p>
  Given a sorted array <code>arr[]</code> of size <code>n</code> and a number <code>x</code>, you need to find the number of occurrences of <code>x</code> in <code>arr</code>.
</p>
<p>
  <b>Example 1:</b>
</p>

    Input:
    N = 7, X = 2
    Arr[] = {1, 1, 2, 2, 2, 2, 3}
    Output: 4
    Explanation: x = 2 occurs 4 times in the given array so the output is 4.

<p>
  <b>Example 2:</b>
</p>

    Input:
    N = 7, X = 4
    Arr[] = {1, 1, 2, 2, 2, 2, 3}
    Output: 0
    Explanation: X = 4 is not present in the given array so the output is 0.

<p>
  <b>Your Task:</b>
</p>
<p>
  You don't need to read input or print anything.<br>
  Your task is to complete the function count() which takes the array of integers arr, n, and x as parameters and returns an integer denoting the answer.
  If x is not present in the array (arr) then return 0.
</p>


  - <b>Expected Time Complexity</b>: O(logN) 
  - <b>Expected Auxiliary Space</b>: O(1)


<b>Constraints:</b>

    1 ≤ N ≤ 105
    1 ≤ Arr[i] ≤ 106
    1 ≤ X ≤ 106
