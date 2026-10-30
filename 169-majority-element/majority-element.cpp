class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //isme phele nums jo vector diya h uskisize define ki
        //fr map bnaya jo ki sbhi elements ki frequency store krega
        //fr 2 variable declare ki h ek maximum frequency dekhne k liye or 
        //or ek ans variable jo ki maximum frequency wale element ko store krega
        //fr map m loop chalaya or check ki agar kisi element ki frequnecy maxfreq s jyada h to maxfreq ko update krke us element ki freuqency k equal krdo
        //or jis bi element ki freqency jyada h us element ko ans m update krdo ya fr and ko us element k equal krdo 
        //or fr ans return krdo kyuki apn ko maximum frequecny wale element hi return krna h
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
