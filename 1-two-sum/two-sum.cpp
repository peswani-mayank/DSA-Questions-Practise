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

//explanation of method 1
//In this approach, we use an unordered_map to store array elements along with their indices. We traverse the array and calculate the complement of the current element using target - current. Then, we check whether this complement already exists in the map using mp.find(more). If it exists, we have found the two elements whose sum equals the target, so we return their indices. Otherwise, we store the current element and its index in the map using mp[current] = i. If no valid pair is found after traversing the entire array, we return an empty vector.

//time:o(n) in best
//space:o(n)

//if we are using map inplace of unordered map then time complexity would be o(nlogn)
