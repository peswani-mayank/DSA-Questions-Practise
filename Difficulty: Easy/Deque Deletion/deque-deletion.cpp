class Solution {
  public:
    void eraseAt(deque<int> &deq, int x) {
        // code here
        deq.erase(deq.begin()+x);
    }

    void eraseInRange(deque<int> &deq, int start, int end) {
        // code here
        deq.erase(deq.begin()+start,deq.begin()+end);
    }

        
    void eraseAll(deque<int> &deq) {
        // code here
        deq.clear();
        
    }
};