class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // 0, 1 aur 2 ki frequency count karne ke liye variables
        int cnt1=0;
        int cnt2=0;
        int cnt3=0;

         // First traversal: array mein 0, 1 aur 2 count karo
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt1++; // Agar 0 mila toh uska count increase karo
            }else if(nums[i]==1){
                cnt2++;// Agar 1 mila toh uska count increase karo
            }else{
                cnt3++;// Agar 2 mila toh uska count increase karo
            }
        }

        // Starting ki cnt1 positions par 0 fill karo
        for(int i=0;i<cnt1;i++){
            nums[i]=0;
        }

         // Next cnt2 positions par 1 fill karo
        for(int i=cnt1;i<cnt1+cnt2;i++){
            nums[i]=1;
        }

         // Remaining positions par 2 fill karo
        for(int i=cnt1+cnt2;i<n;i++){
            nums[i]=2;
        }
        
    }
};

//time:o(n)
//space:o(1);