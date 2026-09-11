class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev=0; //here we declare one variable to store number in reverse order
        while(n>0){
            int last=n%10;
            rev=rev*10+last;
            n=n/10;
        }
        return rev;
    }
};