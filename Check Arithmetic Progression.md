## 01. Check Arithmetic Progression

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-arithmetic-progression1842/1)

### Problem Description

**Task:** Given an array arr[] of integers. Write a program to check whether an arithmetic progression can be formed using all the given elements.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [0, 12, 4, 8]
```
- **Output:**
```text
true
```
- **Explanation:** Rearrange given array as [0, 4, 8, 12] which forms an arithmetic progression.

##### Example 2

- **Input:**
```text
arr[] = [12, 40, 11, 20]
```
- **Output:**
```text
falseExplanation: there is no rearrangment which can forms an arithmetic progression.
```

#### Constraints

- **1.** `1 ≤ arr.size() ≤ 10⁶⁰ ≤ arr[i] ≤ 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-24 23:47:55
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        
            sort(arr.begin(),arr.end());
            // if(n<=2){
            //     return true;
            // }
            int d=arr[1]-arr[0];
            for(int i=1;i<n;i++){
                if(arr[i]-arr[i-1]!=d){
                    return false;
                }
            }
            return true;
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-24 23:47:44
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        
            sort(arr.begin(),arr.end());
            if(n<=2){
                return true;
            }
            int d=arr[1]-arr[0];
            for(int i=1;i<n;i++){
                if(arr[i]-arr[i-1]!=d){
                    return false;
                }
            }
            return true;
        
    }
};
```

*Generated on: 10/24/2026, 11:50:48 PM*