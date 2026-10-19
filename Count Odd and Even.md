## 01. Count Odd and Even

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/count-odd-even/1)

### Problem Description

**Task:** Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

> **Note:** Return two elements where the first one in the count of odd & second one is the count of even.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [1, 2, 3, 4, 5]
```
- **Output:**
```text
3 2
```
- **Explanation:** There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).

##### Example 2

- **Input:**
```text
arr[] = [1, 1]
```
- **Output:**
```text
2 0Explanation: There are 2 odd elements (1, 1) and no even elements.
```

#### Constraints

- **1.** `1 <= arr.size <= 10⁶`
- **2.** `1 <= arr[i] <= 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 23:04:28
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int n=arr.size();
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                a++;
            }else{
                b++;
            }
        }
        return {b,a};
        
    }
};
```

*Generated on: 10/19/2026, 11:09:30 PM*