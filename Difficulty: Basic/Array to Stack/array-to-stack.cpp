class Solution {
  public:

    // Push elements of an array into a stack.
    stack<int> push(vector<int> &arr) {
        stack<int> s;
        for(int i=0;i<arr.size();i++){
            s.push(arr[i]);
        }
        return s;

        // code here
        
    }

    // Print elements of a stack and pop them.
    void printAndPop(stack<int> s) {
        // code here
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
};