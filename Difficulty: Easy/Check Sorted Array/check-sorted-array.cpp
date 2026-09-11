class Solution {
  public:
    bool isSorted(vector<int>& arr) {       // function check karega ki array sorted hai ya nahi

        for(int i = 1; i < arr.size(); i++) {  // second element se start karke last element tak jayenge

            if(arr[i] < arr[i - 1]) {        // agar current element previous element se chhota hai

                return false;                // array sorted nahi hai, isliye false return karo
            }
        }

        return true;                         // poora array check ho gaya aur koi problem nahi mili
    }
};
