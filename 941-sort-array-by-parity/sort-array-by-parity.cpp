//method 1: 

//in this i m using two pointer approach i starts from first element and j starts from last element 
//fr while loop chalaya or check kr rhe h jb tk i<j h tb tk check agar array m starting s check krega agar  koi  element even h to i aage badta rhega or fr agar if wali condition fail ho jati h to else if conditon m jyega or last s check krega agar last s elemetn odd h ya nhi h agar odd h to j ek kam hota jyega
//or agar ese dono hi condition hi fail hojati h to else part m jyega or element jo ith wala h or jth wala h usko swap krdega is se even wala aage aajyega or odd wala piche chala jyega or fr i ko aage badyege or j ko piche krege is se time complexity o(n) rahegi or space complexity o(1) rahegi kyuki apn same vector nums m hi kaam kr rhe h koi dusra vector nhi bna rahe h


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
// Time Complexity:(O(n)
// Space Complexity:(O(1)—working on same  vector.


//method 2:
//is method 2 k mene new vector bnaya h or fr loop chalaya h agar jo even element hoga nums vector m h usko phele ans wale vector m store krdo or dusre loop m fr condition chalayi h even wala loop khatam hojaye to fr odd element push kre ans wale vector m or fr last m ans wala vector return krde isme time complexity o(n)rahegi but space complexity o(n) hojyegi kyuki isme ek new vector ans bnaya h or fr us ans vector ko return kr rhe h ye meri approach thi phele mene ese hi kiya tha fr method 1 k baare m sikha 

// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans;
//         for(int i=0;i<n;i++){
//             if(nums[i]%2==0){
//                 ans.push_back(nums[i]);
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]%2!=0){
//                 ans.push_back(nums[i]);
//             }
//         }
//         return ans;
//     }
// };

// Time Complexity:(O(n)—two traversals.
// Space Complexity:(O(n)—extra vector.
