## 01. return int(np.mean(arr))

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/mean0021/1)

### Problem Description

**Task:** Given an array arr[], return the floor value of the mean of its elements.Examples:Input: arr[] = [1, 3, 4, 2, 6, 5, 8, 7]Output: 4Explanation: Sum of the elements is 1 + 3 + 4 + 2 + 6 + 5 + 8 + 7 = 36, Mean = 36/8 = 4.5, floor(4.5) = 4.Input: arr[] = [4, 4, 4, 4, 4]Output: 4Explanation: Sum of the elements is 4 + 4 + 4 + 4 + 4 = 20, Mean = 20/5 = 4

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 22:52:59
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int avg=sum/n;
        int b=floor(avg);
        return b;
    }
};
```

*Generated on: 10/22/2026, 10:52:54 PM*