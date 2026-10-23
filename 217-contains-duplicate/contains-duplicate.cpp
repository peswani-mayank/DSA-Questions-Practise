class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

    //isme apn n phele n bnaya jo ki array  ki size h
    //fr map bnaya frequency count krne k liye
    //fr loop chalaya or map m frequecny count krtr gye of fr if m condition daal di
    //ki agar kisi bi element ki frequency 1 s jyada aaye to true return krna 
    //or agar pure loop esa kahi nhi hota ki kisi ki bi frequency 1 s jyada ho to loop end hojyega or loop s bhar aakr false return hojyega
    
      int n=nums.size();
       map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[nums[i]]++;
        if(mp[nums[i]]>1){
            return true;
        }
       }
       return false;
    }
    
};