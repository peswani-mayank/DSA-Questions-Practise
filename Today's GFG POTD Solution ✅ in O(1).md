## 01. Today's GFG POTD Solution ✅ in O(1)

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reverse-coding2452/1)

### Problem Description

**Task:** Given an integer n, compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.Examples:Input: n = 6

#### Examples

##### Example 1

- **Output:**
```text
0
```
- **Explanation:** Since n is 0, the sum is 0.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(1)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-29 19:10:00
- **Status:** Correct
- **Marks:** 0

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum;

    return 0;
}
```

#### Solution 2 (C++)

- **Submitted:** 2025-11-16 01:28:28
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int findSum(int n) {
        // code here
        if(n==0){
            return 0;
        }
        else{
            return n*(n+1)/2;
        }
    }
};
```

*Generated on: 10/29/2026, 7:10:07 PM*