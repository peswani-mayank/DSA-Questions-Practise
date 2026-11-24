class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // First, I calculate the size of the array and create an answer vector of the same size. Then, I initialize two pointers, pos = 0 and neg = 1, where pos is used to store positive numbers at even indices and neg is used to store negative numbers at odd indices. After that, I traverse the original array using a loop. If the current element is positive, I place it at the pos index and increment pos by 2. Otherwise, I place it at the neg index and increment neg by 2. In this way, positive and negative elements are arranged alternately while maintaining their original relative order. Finally, I return the answer vector. The time complexity is O(n) and the space complexity is O(n).
        int n=nums.size();
        vector<int>ans(n);
        int pos=0;
        int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};