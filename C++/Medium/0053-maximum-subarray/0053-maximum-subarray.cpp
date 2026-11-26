class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        //using kadanes algorithm
        //time:o(n);
        int sum=0;// Stores the sum of the current subarray
        int maxi=INT_MIN;// Stores the maximum subarray sum
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;// Update maximum sum
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;


        
    }
};