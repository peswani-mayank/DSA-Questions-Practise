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

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 23:47:18
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
  //isme phele for loop chalyege or wo if condition ko check krega agr current elment
  //previous s chota h to false return krta jyega or agar pure array m usko agar milta h
  //ki current element previous element s bada h to false return nhi krega
  //sidha hi loop s bhar aakr true return krdega 
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

*Generated on: 10/19/2026, 11:47:05 PM*