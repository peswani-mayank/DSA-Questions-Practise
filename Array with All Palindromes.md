## 01. Array with All Palindromes

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1)

### Problem Description

**Task:** Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.Examples:Input: arr[] = [111, 222, 333, 444, 555]

#### Examples

##### Example 1

- **Output:**
```text
false
```
- **Explanation:** 20 is not a palindrome hence the output is false.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-25 00:43:35
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num=arr[i];
            int org=num;
            int rev=0;
            while(num>0){
                int last=num%10;
                rev=rev*10+last;
                num=num/10;
            }
            if(org!=rev){
                return false;
            }
        }
        return true;
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-25 00:43:29
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num=arr[i];
            int org=num;
            int rev=0;
            while(num>0){
                int last=num%10;
                rev=rev*10+last;
                num=num/10;
            }
            if(org!=rev){
                return false;
            }
        }
        return true;
        
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-10-25 00:42:56
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num=arr[i];
            int org=num;
            int rev=0;
            while(num>0){
                int last=num%10;
                rev=rev*10+last;
                num=num/10;
            }
            if(org!=rev){
                return false;
            }
        }
        return true;
        
    }
};
```

*Generated on: 10/25/2026, 12:43:01 AM*