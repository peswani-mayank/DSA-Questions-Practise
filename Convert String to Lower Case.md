## 01. Convert String to Lower Case

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/convert-string-to-lowercase/1)

### Problem Description

**Task:** Given a string s, convert all its characters to lowercase.Examples:Input: s = "ABCddE"

#### Examples

##### Example 1

- **Output:**
```text
"lmnoppqq"
```
- **Explanation:** L, M, N, O, and Q are converted to l, m, n, o and q thus all uppercase characters of the string converted to lowercase letter.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (Java)

- **Submitted:** 2026-10-27 19:27:52
- **Status:** Correct
- **Marks:** 1

```java
class Solution {
    static String toLower(String s) {
        // code here
        return s.toLowerCase();
    }
}
```

*Generated on: 10/27/2026, 7:27:23 PM*