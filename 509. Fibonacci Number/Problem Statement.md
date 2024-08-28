# [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/description/)
<p>
  The <b>Fibonacci numbers</b>, commonly denoted <code>F(n)</code> form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from <code>0</code> and <code>1</code>. That is,
</p>

    F(0) = 0, F(1) = 1
    F(n) = F(n - 1) + F(n - 2), for n > 1.

<p>
  Given <code>n</code>, calculate <code>F(n)</code>.
</p>

    Example 1:
    Input: n = 2
    Output: 1
    Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
    
    Example 2:
    Input: n = 3
    Output: 2
    Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
    
    Example 3:
    Input: n = 4
    Output: 3
    Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

<p>
  <b>Constraints:</b>
</p>

- <code>0 <= n <= 30</code>
