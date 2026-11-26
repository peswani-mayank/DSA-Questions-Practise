## 01. Kth Smallest

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1)

### Problem Description

**Task:** Given an integer array arr[] and an integer k, find and return the k^th smallest element in the given array.Examples :Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4Output: 5

#### Examples

##### Example 1

- **Explanation:** 3rd smallest element in the given array is 7.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log k)
- **Expected Auxiliary Space Complexity:** O(k)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-11-26 23:26:34
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        //method 1:
        //time:o(nlogn)
        //space:o(logn)
        // sort(arr.begin(),arr.end());
        // return arr[k-1];
        
        //method 2:
        //time:o(nlogk)
        //space:o(k)
        //best when k is very smaller than n
        int n=arr.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-26 23:15:42
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
    }
};
```

*Generated on: 11/26/2026, 11:29:14 PM*