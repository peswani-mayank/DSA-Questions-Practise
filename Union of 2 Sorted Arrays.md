## 01. Union of 2 Sorted Arrays

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)

### Problem Description

**Task:** Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.Examples:Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]Output: [1, 2, 3, 4, 5, 6, 7]Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]

#### Examples

##### Example 1

- **Output:**
```text
[1, 2]
```
- **Explanation:** Distinct elements including both the arrays are: 1 2.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n + m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-11-23 22:14:31
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        vector<int>unionArray;
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(unionArray.size()==0 || unionArray.back()!=a[i]){
                    unionArray.push_back(a[i]);
                }
                i++;
            }else{
                if(unionArray.size()==0 || unionArray.back()!=b[j]){
                    unionArray.push_back(b[j]);
                }
                j++;
            }
        }
        while(i<n1){
            if(unionArray.size()==0 || unionArray.back()!=a[i]){
                unionArray.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(unionArray.size()==0 || unionArray.back()!=b[j]){
                unionArray.push_back(b[j]);
            }
            j++;
        }
        return unionArray;
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-22 19:39:38
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1=a.size();
        int n2=b.size();
        set<int>s1;
        for(int i=0;i<n1;i++){
            s1.insert(a[i]);
        }
        for(int i=0;i<n2;i++){
            s1.insert(b[i]);
        }
        vector<int>ans;
        
        for(auto it:s1){
            ans.push_back(it);
            
        }
        return ans;
        
    }
};
```

*Generated on: 11/23/2026, 10:25:53 PM*