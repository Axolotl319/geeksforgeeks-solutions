## [Count Triplets with Sum in Sorted](https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-gfg-160/problem/count-all-triplets-with-given-sum-in-sorted-array)

**Difficulty:** Medium  
**Topics:** two-pointer-algorithm  

**Problem Description:**

<p dir="ltr"><span style="font-size: 14pt;">Given a sorted array&nbsp;<strong>arr[]</strong> and a <strong>target</strong> value, the task is to count triplets <strong>(i, j, k)</strong> of valid indices, such that<strong> </strong>arr[i] + arr[j] + arr[k] = target and i &lt; j &lt; k.</span></p><p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p><pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [-3, -1, -1, 0, 1, 2], target = -2</span><br><span style="font-size: 14pt;"><strong>Output: </strong>4</span><br><span style="font-size: 14pt;"><strong>Explanation</strong>: Four triplets that add up to -2 are:</span><br><span style="font-size: 14pt;">arr[0] + arr[3] + arr[4] = (-3) + 0 + (1) = -2</span><br><span style="font-size: 14pt;">arr[0] + arr[1] + arr[5] = (-3) + (-1) + (2) = -2</span><br><span style="font-size: 14pt;">arr[0] + arr[2] + arr[5] = (-3) + (-1) + (2) = -2</span><br><span style="font-size: 14pt;">arr[1] + arr[2] + arr[3] = (-1) + (-1) + (0) = -2</span></pre><pre><span style="font-size: 14pt;"><strong>Input:</strong> arr[] = [-2, 0, 1, 1, 5], target = 1</span><br><span style="font-size: 14pt;"><strong>Output:</strong> 0</span><br><span style="font-size: 14pt;"><strong>Explanation</strong>: There is no triplet whose sum is equal to 1. </span></pre>

**Expected Complexities:**

Time Complexity: O(n^2)  
Auxiliary Space: O(1)
