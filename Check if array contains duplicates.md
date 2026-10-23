## 01. Check if array contains duplicates

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-if-array-contains-duplicates/1)

### Problem Description

**Task:** Given an integer array arr[], check if the array contains any duplicate value.

#### Examples

##### Example 1

- **Input:**
```text
arr = [4, 5, 6, 4]
```
- **Output:**
```text
true Explaination: 4 is the duplicate value.
```

##### Example 2

- **Input:**
```text
arr = [1, 2, 3, 4]
```
- **Output:**
```text
false Explaination: All values are distinct.
```

#### Constraints

- **1.** `1 <= arr.size() <= 10⁵`
- **2.** `0 <= arr[i] <= 10⁴`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-23 18:33:45
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>1){
                return true;
            }
        }
        return false;
    }
};
```

*Generated on: 10/23/2026, 6:33:19 PM*