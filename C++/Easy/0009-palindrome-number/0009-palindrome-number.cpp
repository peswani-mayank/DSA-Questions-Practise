class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long rev=0;
        while(x>0){
            int last=x%10;
            rev=rev*10+last;
            x=x/10;
        }
        if(rev==temp){
            return true;
        }else{
            return false;
        }
        
    }
};