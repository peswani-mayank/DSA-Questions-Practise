## 01. Occurrences of Consecutive 3 Numbers

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/special-integers/1)

### Problem Description

**Task:** Given an integer array arr[], count the number of distinct special integers. An integer x is called a special integer if x - 1, x, and x + 1 are all present in the array. Return the number of distinct special integers.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [1, 2, 3, 3, 4]Output: 2Explanation: The special integers in this arr are 2 and 3.
```

##### Example 2

- **Input:**
```text
arr[] = [2, 3, 5, 7]Output: 0Explanation: There is no special integer in this arr.
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 00:19:06
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int specialIntegers(vector<int> &arr) {
        // code here
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=1;
        }
        int count=0;
        for(auto it:mp){
            int x=it.first;
            if(mp.find(x-1)!=mp.end()&&mp.find(x+1)!=mp.end()){
                count++;
            }
        }
        return count;
        
    }
};
```

*Generated on: 10/22/2026, 12:18:36 AM*