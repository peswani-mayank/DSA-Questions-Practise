## 01. Factorial

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/factorial5739/1)

### Problem Description

**Task:** Given a positive integer, n. Find the factorial of n.Examples :Input: n = 5

#### Examples

##### Example 1

- **Output:**
```text
24
```
- **Explanation:** 1 x 2 x 3 x 4 = 24

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-29 19:17:44
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n==0 || n==1){
            return 1;
        }
        return n*factorial(n-1);
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2025-11-16 01:31:53
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n==0||n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
};
```

*Generated on: 10/29/2026, 7:17:21 PM*