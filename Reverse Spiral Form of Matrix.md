## 01. Reverse Spiral Form of Matrix

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1)

### Problem Description

**Task:** Given a matrix mat[][], return its elements in reverse spiral order.Note: Reverse spiral order starts from the center of the matrix (or the closest valid center for even dimensions) and moves outward in a spiral.Examples :Input: mat[][] = [[9, 8, 7], [6, 5, 4], [3, 2, 1]] Output: [5, 6, 3, 2, 1, 4, 7, 8, 9]Explanation: Spiral form of the matrix in reverse order starts from the centre and goes outward.

#### Examples

##### Example 1

- **Input:**
```text
mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]] Output: [10, 11, 7, 6, 5, 9, 13, 14, 15, 16, 12, 8, 4, 3, 2, 1]
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n * m)
- **Expected Auxiliary Space Complexity:** O(n * m)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-24 13:36:33
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<int> reverseSpiral(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int left=0;
        int top=0;
        int right=m-1;
        int bottom=n-1;
        
        vector<int>ans;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            
            for(int i=top;i<=bottom;i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
                
            }
            
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            
            left++;
                
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```

*Generated on: 11/24/2026, 1:37:06 PM*