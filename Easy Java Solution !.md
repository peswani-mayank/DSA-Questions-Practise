## 01. Easy Java Solution !

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/find-distinct-elements--130928/1)

### Problem Description

**Task:** Given an integer array arr[], return the count of all the distinct elements in an arrayExamples:Input: arr[] = [2, 2, 3, 2]

#### Examples

##### Example 1

- **Output:**
```text
5Explanation: Distinct elements are {12, 1, 14, 3, 16}Input: arr[] = [1, 1, 1, 1]Output: 1Explanation: Only one distinct element {1}
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-25 00:06:47
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int countDistinct(vector<int>& arr) {
        // code here
        // int n=arr.size();
        // sort(arr.begin(),arr.end());
        // int count=1;
        // for(int i=1;i<n;i++){
        //     if(arr[i]!=arr[i-1]){
        //         count++;
        //     }
        // }
        // return count;
        
        unordered_set<int> s;

        for(int i = 0; i < arr.size(); i++) {
            s.insert(arr[i]);
        }

        return s.size();
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-25 00:05:35
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int countDistinct(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                count++;
            }
        }
        return count;
        
    }
};
```

*Generated on: 10/25/2026, 12:08:35 AM*