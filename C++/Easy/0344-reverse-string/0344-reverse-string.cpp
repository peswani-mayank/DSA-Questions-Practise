class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size(); //idr vector h characters ka isliye s.size()use kiya h 
        //string m length or size dono use hota h 
        //but vector m sirf size use hota h
        int left=0;
        int right=n-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        
    }
};