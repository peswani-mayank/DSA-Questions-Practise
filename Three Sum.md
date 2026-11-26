## 01. Three Sum

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/three-sum/1)

### Problem Description

**Task:** Given an integer array arr, return all the unique triplets [arr[i], arr[j], arr[k]] such that i ! = j, i ! = k, and j ! = k, and arr[i] + arr[j] + arr[k] = = 0.

> **Note:** The triplets must be returned in sorted order, the solution vector should also be sorted, and the answer must not contain any duplicate triplets.

#### Examples

##### Example 1

- **Input:**
```text
arr = [-1,0,1,2,-1,-4]
```
- **Output:**
```text
[[-1,-1,2],[-1,0,1]]
```
- **Explanation:** arr[0] + arr[1] + arr[2] = (-1) + 0 + 1 = 0. arr[1] + arr[2] + arr[4] = 0 + 1 + (-1) = 0. arr[0] + arr[3] + arr[4] = (-1) + 2 + (-1) = 0. The distinct triplets are [-1,0,1] and [-1,-1,2].

##### Example 2

- **Input:**
```text
arr = [0,0,0]
```
- **Output:**
```text
[[0,0,0]]
```
- **Explanation:** The only possible triplet sums up to 0.

#### Constraints

- **1.** `3 <= arr.length <= 3000`
- **2.** `-10⁵ <= arr[i] <= 10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n^2)
- **Expected Auxiliary Space Complexity:** O(n^2)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-26 16:43:12
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]){
                        j++;
                    }
                    while(j<k && arr[k]==arr[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
        
    }
};

//This code uses the Sorting + Two Pointer Approach to solve the 
// 3Sum problem. First, we sort the given array in ascending order so 
// that we can efficiently find three elements whose sum is equal to zero. 
// Then, we iterate through the array using a loop and fix the first element 
// at index i. We initialize two pointers, j = i + 1 and k = n - 1, to find 
// the remaining two elements. Inside the while loop, we calculate the sum 
// of nums[i] + nums[j] + nums[k]. If the sum is less than zero, we 
// increment j to increase the sum; if the sum is greater than zero, 
// we decrement k to decrease the sum. If the sum becomes zero, we 
// store the triplet in the answer vector, move both pointers inward, 
// and skip duplicate elements to ensure that no duplicate triplets are 
// added. We also skip duplicate values of nums[i] to avoid generating 
// repeated combinations. Finally, we return the answer containing all 
// unique triplets whose sum is zero.

//time :o(n*n)
//space o(1)
```

*Generated on: 11/26/2026, 4:43:46 PM*