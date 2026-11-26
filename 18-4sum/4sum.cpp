class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum= 1LL*nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum<target){
                        k++;

                    }else if(sum>target){
                        l--;
                    
                    }else{
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }
                        while(k<l && nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                }
            }
        }
        return ans;
        
    }
};

//Four Sum problem ko solve karne ke liye hum Sorting + Two Nested Loops + Two Pointer Approach use karte hain. Sabse pehle given array ko ascending order mein sort karte hain, jisse pointer movements ke through sum ko efficiently increase ya decrease kar sakein. Uske baad first loop se pehla element i fix karte hain aur second loop se doosra element j fix karte hain. Dono loops mein duplicate elements ko skip karte hain taaki repeated quadruplets generate na hon. Ab remaining two elements find karne ke liye k = j+1 aur l = n-1 initialize karte hain. While loop ke andar chaaron elements ka sum calculate karte hain. Agar sum target se chhota hai, toh k ko increment karte hain taaki sum increase ho; agar sum target se bada hai, toh l ko decrement karte hain taaki sum decrease ho. Agar sum target ke equal hota hai, toh hum us quadruplet ko answer vector mein store karte hain, dono pointers move karte hain aur duplicate values skip karte hain. Ye process tab tak continue hota hai jab tak k aur l pointers meet nahi kar jaate. Finally, hum saare unique quadruplets return kar dete hain.

//time:o(n*n*n);
//Auxiliary Space Complexity: O(log n) typically, due to sorting.
// Output Space Complexity: O(m), where m is the number of unique quadruplets.