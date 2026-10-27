## 01. Reverse a String

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reverse-a-string/1)

### Problem Description

**Task:** Given a string s, reverse the string.Examples:Input: s = "Geeks"

#### Examples

##### Example 1

- **Output:**
```text
"skeeG"
```

##### Example 2

- **Input:**
```text
s = "for"
```
- **Output:**
```text
"a"
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-27 19:25:07
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
```

*Generated on: 10/27/2026, 7:24:39 PM*