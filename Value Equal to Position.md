## 01. Value Equal to Position

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?utm=codolio)

### Problem Description

**Task:** Given an array arr[], find the elements whose value is equal to the position where they appear.

> **Note:** There can be more than one element in the array which have the same value as its position. You need to include the position of every such element.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [15, 2, 45, 4, 7]
```
- **Output:**
```text
[2, 4]
```
- **Explanation:** Here, arr[2] = 2 exists here and arr[4] = 4 exists.

##### Example 2

- **Input:**
```text
arr[] = [1]
```
- **Output:**
```text
[1]
```
- **Explanation:** Here arr[1] = 1 exists.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-15 17:45:53
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        vector<int>vec;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                vec.push_back(arr[i]);
            }
        }
        return vec;
    }
};
```

*Generated on: 11/15/2026, 5:47:26 PM*