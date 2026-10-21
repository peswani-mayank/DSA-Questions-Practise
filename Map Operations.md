## 01. Map Operations

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/map-operations/1)

### Problem Description

**Task:** You are given an array arr. You need to insert the elements of arr into a map(element as key and index as value). Also, you need to erase a given element x from the map and print "erased x" if successfully erased, else print "not found".Complete print() function to print the map.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [9, 8, 7, 4, 4, 2, 1, 1, 9, 8], x = 1 1 7 2 5 4 4 7 2 8 9 9 8erased 1 2 5 4 4 7 2 8 9 9 8
```

#### Constraints

- **1.** `1 <= arr.size() <= 1000`
- **2.** `1 <= arr[i] <= 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 00:01:27
- **Status:** Correct
- **Marks:** 1

```cpp
map<int, int> mapInsert(vector<int>& arr) {
    map<int, int> mp;
    // Insert arr[i] as key and i as value
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp[arr[i]] = i;
    }
    

    return mp;
}

void mapDisplay(map<int, int>& mp) {
    // Print every key and value pair in a new line
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}


void mapErase(map<int, int>& mp, int x) {
    // Check whether x exists
    if(mp.find(x) != mp.end()) {
        mp.erase(x);
        cout << "erased " << x;
    }
    else {
        cout << "not found";
    }

    cout << endl;
}
```

*Generated on: 10/22/2026, 12:00:56 AM*