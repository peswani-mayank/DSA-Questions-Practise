## 01. Two Sum in Sorted Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/two-sum-in-sorted-array/1)

### Problem Description

**Task:** Given an array arr[] that is sorted in non-decreasing order, along with an integer target. Your task is to find positions of two elements with sum equal to target. If such a pair exists, return the positions (index + 1) of the two elements in increasing order. If no such pair exists, return [-1, -1].Note: If your answer is correct then the driver code will print "true" otherwise "false". Since there can be multiple answers, the driver code mainly checks whether the pair returned by your code is correct or not.Examples:Input: arr[] = [2, 7, 11, 15], target = 9Output: [1, 2]Explanation: Since arr[0] + arr[1] = 2 + 7 = 9 equals the target, return their 1-based indices : [1, 2]Input: arr[] = [1, 3, 4, 6, 8, 11], target = 10Output: [3, 4]Explanation: Since arr[2] + arr[3] = 4 + 6 = 10 equals the target, return their 1-based indices : [3, 4]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-25 18:37:36
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return {left+1,right+1};
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
        return{-1,-1};
    }
};
```

*Generated on: 11/25/2026, 6:39:43 PM*