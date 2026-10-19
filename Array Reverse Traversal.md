## 01. Array Reverse Traversal

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/array-traversal-reverse/1)

### Problem Description

**Task:** Given an array arr[] containing n integers. Print the elements of the array in reverse order on a single line, with a space separating consecutive elements.

#### Examples

##### Example 1

- **Input:**
```text
n = 5, arr[] = [54, 43, 2, 1, 5]
```
- **Output:**
```text
5 1 2 43 54
```
- **Explanation:** Just traverse in reverse and print the numbers.

##### Example 2

- **Input:**
```text
n = 4, arr[] = [324, 5, 2, 2]
```
- **Output:**
```text
2 2 5 324
```
- **Explanation:** Just traverse in reverse and print the numbers.

#### Constraints

- **1.** `1≤ n ≤ 101 ≤ elements of arr ≤ 10³`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-25 23:06:46
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    void arrayTraversalReverse(int arr[], int n) {
        // Code here
        for(int i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};
```

*Generated on: 10/20/2026, 12:09:06 AM*