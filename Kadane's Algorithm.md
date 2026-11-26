## 01. Kadane's Algorithm

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)

### Problem Description

**Task:** You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].Examples:Input: arr[] = [2, 3, -8, 7, -1, 2, 3]

#### Examples

##### Example 1

- **Output:**
```text
11
```
- **Explanation:** The subarray [7, -1, 2, 3] has the largest sum 11.

##### Example 2

- **Input:**
```text
arr[] = [-2, -4]
```
- **Output:**
```text
25
```
- **Explanation:** The subarray [5, 4, 1, 7, 8] has the largest sum 25.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-26 22:56:06
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
```

*Generated on: 11/26/2026, 10:56:58 PM*