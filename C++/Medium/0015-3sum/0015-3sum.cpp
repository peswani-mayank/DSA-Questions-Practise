class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());//o(nlogn)
        for(int i=0;i<n;i++){ //o(n*n)
            if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};

//This code uses the Sorting + Two Pointer Approach to solve the 3Sum problem. First, we sort the given array in ascending order so that we can efficiently find three elements whose sum is equal to zero. Then, we iterate through the array using a loop and fix the first element at index i. We initialize two pointers, j = i + 1 and k = n - 1, to find the remaining two elements. Inside the while loop, we calculate the sum of nums[i] + nums[j] + nums[k]. If the sum is less than zero, we increment j to increase the sum; if the sum is greater than zero, we decrement k to decrease the sum. If the sum becomes zero, we store the triplet in the answer vector, move both pointers inward, and skip duplicate elements to ensure that no duplicate triplets are added. We also skip duplicate values of nums[i] to avoid generating repeated combinations. Finally, we return the answer containing all unique triplets whose sum is zero.

//time:o(nlogn)+o(n*n)-->total:o(n*n)
//space o(1);