## 01. Remove Duplicates Sorted Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1)

### Problem Description

**Task:** You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared.Examples :Input: arr[] = [2, 2, 2, 2, 2]

#### Examples

##### Example 1

- **Output:**
```text
[2]
```
- **Explanation:** After removing all the duplicates only one instance of 2 will remain i.e. [2] so modified array will contains 2 at first position and you should return array containing [2] after modifying the array.

##### Example 2

- **Input:**
```text
arr[] = [1, 2, 4]
```
- **Output:**
```text
[1, 2, 4]Explanation: As the array does not contain any duplicates so you should return [1, 2, 4].
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-22 16:49:00
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        vector<int>ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};
```

*Generated on: 11/22/2026, 4:49:30 PM*