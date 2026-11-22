class Solution {
public:
// Sabse pehle hum j = -1 initialize karte hain. Iske baad first loop array ko traverse karta hai 
//aur pehla zero find karta hai. Jab i = 0 hota hai, value 1 hai, zero nahi hai, isliye 
//kuch nahi hota. Jab i = 1 hota hai, value 0 milti hai, toh j = 1 ho jata hai aur break 
//ki wajah se loop terminate ho jata hai. Ab j first zero ka index store kar raha hai.
// Ab second loop i = j + 1 se start hota hai, yaani i = 2 se. Yahan hum check karte 
//hain ki current element non-zero hai ya nahi. Jab i = 2 hota hai, arr[2] = 2 hai, 
//jo non-zero hai, toh arr[2] aur arr[1] ko swap kar dete hain. Array ban jata hai 
//[1, 2, 0, 0, 3, 0, 4] aur j++ hone ke baad j = 2 ho jata hai. Jab i = 3 hota hai, value 0 hai, 
//toh koi swapping nahi hoti. Jab i = 4 hota hai, value 3 hai, toh arr[4] aur arr[2] swap hote hain. 
//Array ban jata hai [1, 2, 3, 0, 0, 0, 4] aur j = 3 ho jata hai. Jab i = 5 hota hai, value 0 hai, 
//toh kuch nahi hota. Jab i = 6 hota hai, value 4 hai, toh arr[6] aur arr[3] swap hote hain. 
//Ab array ban jata hai [1, 2, 3, 4, 0, 0, 0] aur j = 4 ho jata hai.
// Finally, last loop poore array ko print karta hai.
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1){
            return;
        }
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};