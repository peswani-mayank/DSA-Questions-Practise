// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             if(nums[i]%2==0){
//                 i++;
//             }else if(nums[j]%2!=0){
//                 j--;
//             }else{
//                 swap(nums[i],nums[j]);
//                 i++;
//                 j--;
//             }
//         }
//         return nums;
//     }
// };


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

// Time Complexity:(O(n)—two traversals.
// Space Complexity:(O(n)—extra vector.