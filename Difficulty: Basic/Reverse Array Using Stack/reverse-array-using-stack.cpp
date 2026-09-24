class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        // code here
        stack<int>s;
        for(int i=0;i<arr.size();i++){
            s.push(arr[i]);
        }
        
        for(int i=0;i<arr.size();i++){
            arr[i]=s.top();
            //i = 0
            //   arr[0] = 5
            //   pop 5
            //   i = 1
            //   arr[1] = 4
            //   pop 4

            //   i = 2
            //   arr[2] = 3
            //   pop 3

            //   i = 3
            //   arr[3] = 2
            //   pop 2

            //   i = 4
            //   arr[4] = 1
            //   pop 1
            s.pop();
        }
    }
};
