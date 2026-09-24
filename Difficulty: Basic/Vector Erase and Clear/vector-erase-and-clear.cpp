// void clearAll(vector<int> &arr) {
//     // code here
//     arr.clear();
// }

// void eraseAt(vector<int> &arr, int pos) {
//     // code here
    
//     arr.erase(arr.begin()+pos);
// }

// void eraseInRange(vector<int> &arr, int start, int end) {
//     // code here
    
//     arr.erase(arr.begin()+start,arr.begin()+end);
// }


void clearAll(vector<int> &arr) {
    arr.clear();
}

void eraseAt(vector<int> &arr, int pos) {
    arr.erase(arr.begin() + pos);
}

void eraseInRange(vector<int> &arr, int start, int end) {
    arr.erase(arr.begin() + start, arr.begin() + end);
}