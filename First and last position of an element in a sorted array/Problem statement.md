# First and last occurence of an element in a sorted array

<h3>Problem statement</h3>
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.

<p>
  Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
</p>

<p>
  Note :
</p>

- If ‘k’ is not present in the array, then the first and the last occurrence will be -1.
- 'arr' may contain duplicate elements.

<strong>Example:</strong>
<p>
  Input: 'arr' = [0,1,1,5] , 'k' = 1
</p>

Explanation:
<br>
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

<code>

     Sample Input 1:
      8 2
      0 0 1 1 2 2 2 2
      
      
      Sample output 1:
      4 7
      
      
      Explanation of Sample output 1:
      For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.
      
      
      Sample Input 2:
      4 2
      1 3 3 5
      
      
      Sample output 2:
      -1 -1
      
      
      Expected Time Complexity:
      Try to do this in O(log(n)).
      
      
      Constraints:
      1 <= n <= 10^5
      0 <= k <= 10^9
      0 <= arr[i] <= 10^9
      
      Time Limit : 1 second
</code>