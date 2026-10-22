## 01. Min and Max in Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)

### Problem Description

**Task:** Given an array arr[]. Your task is to find the minimum and maximum elements in the array.Examples:Input: arr[] = [1, 4, 3, 5, 8, 6]

#### Examples

##### Example 1

- **Output:**
```text
[3, 15]Explanation: minimum and maximum element of array are 3 and 15.
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 22:06:37
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return {min,max};
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-21 22:27:29
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return {min,max};
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2025-11-11 11:40:42
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int min=arr[0];
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return {min,max};
    }
};
```

*Generated on: 10/22/2026, 10:06:18 PM*