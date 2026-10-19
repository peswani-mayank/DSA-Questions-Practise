## 01. Check Sorted Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1)

### Problem Description

**Task:** Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.Examples:Input: arr[] = [10, 20, 30, 40, 50]

#### Examples

##### Example 1

- **Output:**
```text
false
```
- **Explanation:** The given array is not sorted.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-15 16:01:09
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool isSorted(vector<int>& arr) {       // function array ko sorted check karega

        for(int i = 1; i < arr.size(); i++) {  // second element se start, har element check karo

            if(arr[i] < arr[i - 1]) {        // agar current element previous se chhota hai

                return false;                // array sorted nahi hai
            }
        }

        return true;                         // poora array check ho gaya, sorted hai
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-15 15:58:43
- **Status:** Correct
- **Marks:** 0

```cpp
// class Solution {
//   public:
//     bool isSorted(vector<int>& arr) { // function array ko sorted check karega

//         // code here
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]>arr[i-1]) //check krege agar  current element previous elemet s bada h to true return krege  warna false return krege
//             {
//                 return true;
//             }
            
            
//         }
//         return false;
//     }
// };
//method 2
class Solution {
  public:
    bool isSorted(vector<int>& arr) {       // function array ko sorted check karega

        for(int i = 1; i < arr.size(); i++) {  // second element se start, har element check karo

            if(arr[i] < arr[i - 1]) {        // agar current element previous se chhota hai

                return false;                // array sorted nahi hai
            }
        }

        return true;                         // poora array check ho gaya, sorted hai
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-09-11 20:09:50
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1])
            {
                return false;
            }
            
            
        }
        return true;
    }
};
```

*Generated on: 10/19/2026, 11:46:05 PM*