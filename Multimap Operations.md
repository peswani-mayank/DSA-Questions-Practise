## 01. Multimap Operations

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/multimap-operations/1)

### Problem Description

**Task:** You are given an array arr. You need to insert the elements of arr into a multimap(element as key and index as value). Also, you need to erase a given element x from the multimap and print "erased x" if successfully erased, else print "not found".Complete print() function to print the multimap.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [9, 8, 7, 4, 4, 2, 1, 1, 9, 8], x = 1 1 6 1 7 2 5 4 3 4 4 7 2 8 1 8 9 9 0 9 8 erased 1 2 5 4 3 4 4 7 2 8 1 8 9 9 0 9 8
```

#### Constraints

- **1.** `1 <= arr.size() <= 1000`
- **2.** `1 <= arr[i] <= 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 01:19:51
- **Status:** Correct
- **Marks:** 2

```cpp
multimap<int, int> multimapInsert(vector<int>& arr) {
    multimap<int, int> mp;
    // Insert arr[i] as key and i as value in the multimap
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp.insert({arr[i], i});
    }

    return mp;
}

void multimapDisplay(multimap<int, int> mp) {
    // Print the keys and value pairs in new line
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

void multimapErase(multimap<int, int>& mp, int x) {
    // If and else condition to erase x from the multimap
    if(mp.find(x)!=mp.end()){
        mp.erase(x);
        cout << "erased " << x<<endl;
    }else{
         cout << "not found";
         cout << endl;
    }
    

   
}
```

*Generated on: 10/22/2026, 1:19:53 AM*