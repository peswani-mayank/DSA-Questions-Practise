class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max1=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                max1=max(max1,count);
            }else{
                count=0;
            }
        }
        return max1;
        
    }
};

//Maximum Consecutive Ones problem mein humein array mein continuously aane wale 1s ki maximum count find karni hoti hai. Sabse pehle n = nums.size() se array ka size calculate karte hain, phir max1 = 0 aur count = 0 initialize karte hain, jahan count current consecutive ones ko count karega aur max1 ab tak ki maximum consecutive ones ki count store karega. Uske baad for(int i=0; i<n; i++) loop se array ke har element ko traverse karte hain. Agar nums[i] == 1 hota hai, toh count++ karke consecutive ones ki count increase karte hain aur max1 = max(max1, count) se maximum count update karte hain. Agar element 1 nahi hota, toh count = 0 kar dete hain, kyunki consecutive sequence break ho gayi hai aur next sequence ki counting zero se start hogi. Finally, return max1 se maximum consecutive ones ki count return kar dete hain. For example, agar array {1,1,0,1,1,1,0,1} hai, toh consecutive ones ke groups ki counts 2, 3 aur 1 hain, isliye output 3 hoga. Is approach ki Time Complexity O(n) aur Auxiliary Space Complexity O(1) hai, kyunki hum array ko sirf ek baar traverse karte hain aur extra space use nahi karte.