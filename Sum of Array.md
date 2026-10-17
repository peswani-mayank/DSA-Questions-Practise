## 01. Sum of Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/sum-all-array-elements/1)

### Problem Description

**Task:** Given an integer array arr[], return the sum of all elements of arr.Examples:Input: arr[] = [1, 2, 3, 4]

#### Examples

##### Example 1

- **Output:**
```text
10
```
- **Explanation:** 1 + 2 + 3 + 4 = 10.

##### Example 2

- **Input:**
```text
arr[] = [1, 3, 3]
```
- **Output:**
```text
7
```
- **Explanation:** 1 + 3 + 3 = 7.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-09-23 23:44:42
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
public:
    int arraySum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++) {
            sum+=arr[i];
        }
        return sum;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2025-11-11 11:52:50
- **Status:** Correct
- **Marks:** 1

```cpp
// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
};
```

*Generated on: 10/17/2026, 7:12:26 PM*