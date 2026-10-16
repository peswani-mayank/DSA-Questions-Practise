## 01. GCD of Two

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1)

### Problem Description

**Task:** Given two positive integers a and b, find GCD of a and b.

> **Note:** Don't use the inbuilt gcd function

#### Examples

##### Example 1

- **Input:**
```text
a = 20, b = 28
```
- **Output:**
```text
4
```
- **Explanation:** GCD of 20 and 28 is 4

##### Example 2

- **Input:**
```text
a = 60, b = 36
```
- **Output:**
```text
12
```
- **Explanation:** GCD of 60 and 36 is 12

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log(min(a, b)))
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-16 19:16:28
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int gcd=1;
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
        if(a==0){
            gcd=b;
        }else{
            gcd=a;
        }
        return gcd;
        
    }
};
```

*Generated on: 10/16/2026, 7:19:30 PM*