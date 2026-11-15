## 01. Count Frequent Elements

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/count-element-occurences/1)

### Problem Description

**Task:** Given an array arr[] of n integers and an integer k, find the count of elements that appear more than n/k times in the array.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [3, 1, 2, 2, 1, 2, 3, 3], k = 4
```
- **Output:**
```text
2
```
- **Explanation:** The elements 2 and 3 each occur 3 times, which is more than n/k = 2.

##### Example 2

- **Input:**
```text
arr = [2, 3, 3, 2], k = 3
```
- **Output:**
```text
2
```
- **Explanation:** Both 2 and 3 appear 2 times in the array, which is more than n/k.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-15 17:34:49
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second>n/k){
                count++;
            }
        }
        return count;
    }
};
```

*Generated on: 11/15/2026, 5:35:25 PM*