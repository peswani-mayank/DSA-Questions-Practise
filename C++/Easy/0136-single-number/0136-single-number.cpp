class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0;

        for(int i=0;i<nums.size();i++){
//             i = 0 → first index se start
// i < nums.size() → array ke andar rehna
// i++ → next index par jaana
// nums[i] → index i ka element
            a=a^nums[i];
        }
        return a;
        //Main Concept: XOR (^)
// a ^ a = 0 → Same numbers cancel each other.
// 0 ^ a = a → 0 ke saath XOR karne par number same rehta hai.
//Isliye saare numbers ka XOR karne par duplicate numbers cancel ho jaate hain.
//Jo number single hai, wahi ans mein bachta hai
        

        //XOR all elements → duplicate numbers cancel → single number remains.
    }
};