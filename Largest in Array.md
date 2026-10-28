## 01. Largest in Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1)

### Problem Description

**Task:** Given an array arr[]. The task is to find the largest element and return it.Examples:Input: arr[] = [1, 8, 7, 56, 90]

#### Examples

##### Example 1

- **Output:**
```text
10
```
- **Explanation:** There is only one element which is the largest.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (5)

#### Solution 1 (C++)

- **Submitted:** 2026-10-28 18:37:32
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-26 20:09:07
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-10-26 20:02:45
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
```

#### Solution 4 (C++)

- **Submitted:** 2026-10-24 20:10:23
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
```

#### Solution 5 (C++)

- **Submitted:** 2026-10-20 01:23:19
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
```

*Generated on: 10/28/2026, 6:37:16 PM*