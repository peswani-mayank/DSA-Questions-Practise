#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int more=target-a;
            if(mp.find(more)!=mp.end()){
                return {mp[more],i};
            }
            mp[a]=i;

        }
        return {};
    }
};

//method 2 using two pointer:
// class Solution {
//   public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         // code here
//         int n=arr.size();
//         int left=0;
//         int right=n-1;
//         while(left<right){
//             int sum=arr[left]+arr[right];
//             if(sum==target){
//                 return {left+1,right+1};
//             }else if(sum<target){
//                 left++;
//             }else{
//                 right--;
//             }
//         }
//         return{-1,-1};
//     }
// };
//in this tome:o(n) ans space o(1)

