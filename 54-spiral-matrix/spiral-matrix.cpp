class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();// Total number of rows in the matrix
        int m=matrix[0].size(); // Total number of columns in the first row

        int left=0;// Starting column
        int top=0; // Starting row
        int right=m-1;// Last column
        int bottom=n-1;// Last row

        vector<int>ans;// Empty vector to store spiral order elements 
         // Loop tab tak chalega jab tak valid rows aur columns available hain

        while(left<=right && top<=bottom){
        //traverse from left to right;
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;// Top row complete, ab next row par move karo


        //traverse from top to bottom;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;// Right column complete, ab previous column par move karo

        //traverse from right to left;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;// Bottom row complete, ab previous row par move karo
        }
        
        //traverse from bottom to top

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;// Left column complete, ab next column par move karo
        }
        }
        return ans;
    }
};

//time:o(n*m);
//total space:o(n*m);