## 01. Rotate Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)

### Problem Description

**Task:** Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.Note: Consider the array as circular.Examples :Input: arr[] = [1, 2, 3, 4, 5], d = 2

#### Examples

##### Example 1

- **Output:**
```text
[3, 9, 1, 7]
```
- **Explanation:** when we rotate 9 times, we'll get [3, 9, 1, 7] as resultant array.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-11-04 20:07:21
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d=d%n;//d = d % n is used to reduce the number of rotations 
        //so that we don't perform unnecessary operations.
        //Explanation: The modulo (%) operator returns the remainder 
        //after division. In array rotation, when we rotate an array n times, 
        ///it returns to its original position. Therefore, if d is greater 
        //than n, we only need to perform the remaining rotations.
        
        vector<int>temp;
        
        for(int i=0;i<d;i++) {
            temp.push_back(arr[i]);
        }
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        for(int i=n-d;i<n;i++) {
            arr[i]=temp[i-(n-d)];
        }
    }
};

// In this approach, we first calculate the size of the array using arr.size() 
//and then apply d = d % n to handle cases where the number of rotations is greater 
//than the array size. Next, we create a temporary vector and store the first d elements 
//of the original array in it because these elements need to be moved to the end after 
//left rotation. After storing them, we shift all the remaining elements towards the 
//left by d positions using arr[i-d] = arr[i]. Finally, we copy the elements stored in 
//the temporary vector to the last d positions of the original array. This completes 
//the left rotation of the array by d positions.

// Example: If the array is [1, 2, 3, 4, 5] and d = 2, 
//the first two elements [1, 2] are stored in a temporary vector, 
//the remaining elements [3, 4, 5] are shifted to the left, 
//and [1, 2] are placed at the end. The final array becomes [3, 4, 5, 1, 2].

// Time Complexity: O(n)
// Auxiliary Space: O(d)
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-04 20:03:11
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d=d % n;
        vector<int>temp;
        for(int i=0;i<d;i++) {
            temp.push_back(arr[i]);
        }
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        for(int i=n-d;i<n;i++) {
            arr[i]=temp[i-(n-d)];
        }
    }
};
```

*Generated on: 11/4/2026, 8:07:51 PM*