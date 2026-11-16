class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp;
        k=k%n;
        for (int i=n-k;i<n;i++) {
            temp.push_back(nums[i]);
        }
        for (int i=n-k-1;i>=0;i--) {
            nums[i+k]=nums[i];
        }
        for (int i=0;i<k;i++) {
            nums[i]=temp[i];
        }

    }
};

// Right rotation of an array by K places ka matlab hai har element ko K positions right shift karna aur jo elements end se bahar jaate hain unhe beginning mein lana. Sabse pehle n = nums.size() se array ka size calculate karte hain aur k = k % n se K ko normalize karte hain, taaki agar K array size se bada ho toh unnecessary rotations avoid ho sakein. Uske baad for(int i=n-k; i<n; i++) loop se last K elements ko temp vector mein store karte hain, kyunki inhe beginning mein lana hai. Next, for(int i=n-k-1; i>=0; i--) loop se remaining elements ko right shift karte hain using nums[i+k] = nums[i]; yahan backwards traversal isliye karte hain taaki original elements overwrite na hon. Finally, for(int i=0; i<k; i++) loop se temp ke elements ko nums[i] = temp[i] ki help se array ke starting positions par insert kar dete hain. For example, {10,20,30,40,50} ko 2 positions right rotate karne par final array {40,50,10,20,30} milega. Is approach ki time complexity O(n) aur auxiliary space complexity O(k) hai.