## 01. Array or List Traversal

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/array-traversal/1)

### Problem Description

**Task:** Given an array arr[] of size n that contains integers. Print the elements of the array in a single line with a space between them.Note: Don't add a new line at the end.Examples:Input: arr[] = [54, 43, 2, 1, 5]

#### Examples

##### Example 1

- **Output:**
```text
324 5 2 2
```
- **Explanation:** Just traverse and print the numbers.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (4)

#### Solution 1 (C++)

- **Submitted:** 2026-10-25 22:24:10
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    void arrayTraversal(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-25 22:24:07
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    void arrayTraversal(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-08-25 22:18:46
- **Status:** Correct
- **Marks:** 0

```cpp
void arrayTraversal(int arr[], int size) {
    // Code here
    //int n=arr.size;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
```

#### Solution 4 (C++)

- **Submitted:** 2026-08-25 22:17:23
- **Status:** Correct
- **Marks:** 1

```cpp
void arrayTraversal(int arr[], int size) {
    // Code here
    //int n=arr.size;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
```

*Generated on: 10/25/2026, 10:24:02 PM*