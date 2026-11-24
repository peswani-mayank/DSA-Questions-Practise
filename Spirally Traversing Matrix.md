## 01. Spirally Traversing Matrix

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1)

### Problem Description

**Task:** Given a rectangular matrix mat[][] of size n x m, and return a 1D array containing all its elements in spiral order.Examples:Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]

#### Examples

##### Example 1

- **Output:**
```text
[32, 44, 27, 23, 62, 50, 28, 54]
```
- **Explanation:** Applying same technique as shown above, output will be [32, 44, 27, 23, 62, 50, 28, 54].Constraints:1 ≤ n, m ≤10000 ≤ mat[i][j] ≤100

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n * m)
- **Expected Auxiliary Space Complexity:** O(n * m)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-11-24 13:04:04
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        int left=0;
        int top=0;
        
        int right=m-1;
        int bottom=n-1;
        vector<int>ans;
        
        while(top<=bottom && left<=right){
            //left to right
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            
            //top to bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            
            //right to left
            
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            
            //bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
            
        }
        return ans;
        
        
    }
};

//time:o(n*m);
//total space:o(n*m);
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-24 13:03:30
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        int left=0;
        int top=0;
        
        int right=m-1;
        int bottom=n-1;
        vector<int>ans;
        
        while(top<=bottom && left<=right){
            //left to right
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            
            //top to bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            
            //right to left
            
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
        return ans;
        
        
    }
};
```

*Generated on: 11/24/2026, 1:04:32 PM*