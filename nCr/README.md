### Find <sup>n</sup>C<sub>r</sub> for given n and r. As answer can be very large, compute it modulo 10<sup>9</sup> + 7.

#### Example 1:

<code>
Input: n = 3, r = 2<br/>
Output: 3<br/>
Explanation: <sup>3</sup>C<sub></sub> = 3
</code>

#### Example 2:

<code>
Input: n = 4, r = 2<br/>
Output: 6<br/>
Explanation: <sup>4</sup>C<sub></sub> = 6
</code>

#### Your Task:  
You don't need to read input or print anything. Your task is to complete the function ncr() which takes n and r as inputs and returns the answer modulo 10<sup>9</sup> + 7.

Expected Time Complexity: O(n * log n)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ r, n ≤ 10<sup>5</sup>