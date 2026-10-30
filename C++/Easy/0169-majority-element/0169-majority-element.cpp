class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxfreq=0;
        int ans=0;
        for(auto it:mp){
            if(it.second>maxfreq){
                maxfreq=it.second;
                ans=it.first;
            }  
        }
        return ans;
    }
};