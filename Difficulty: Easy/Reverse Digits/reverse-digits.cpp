class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev=0; //here we declare one variable to store number in reverse order
        while(n>0){ //loop chalyege jb tk n 0 s bada rhta h
            int last=n%10; //extract last digit 
            rev=rev*10+last; //reverser number bnayege 
            n=n/10; // last digit hatao
        }
        return rev;  // reversed number return karo
    }
};

//example:
// last = 4
// rev = 0 * 10 + 4 = 4

// last = 3
// rev = 4 * 10 + 3 = 43

// last = 2
// rev = 43 * 10 + 2 = 432

// last = 1
// rev = 432 * 10 + 1 = 4321
