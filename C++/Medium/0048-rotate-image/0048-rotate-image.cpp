class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();// Sabse pehle matrix ka size nikalenge

         //Transpose the matrix
        // Transpose karne ke liye rows ko columns mein convert karenge
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);// Diagonal ke across elements ko swap karenge
            }
        }

        // Har row ko reverse karenge
         // Isse matrix 90 degree clockwise rotate ho jayegi
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());// Current row ke elements ko reverse karenge
        }
        
    }
};