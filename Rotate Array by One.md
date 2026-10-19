## 01. Rotate Array by One

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1)

### Problem Description

**Task:** Given an array arr[], rotate the array by one position in clockwise direction.Examples:Input: arr[] = [1, 2, 3, 4, 5]

#### Examples

##### Example 1

- **Output:**
```text
[3, 9, 8, 7, 6, 4, 2, 1]Explanation: After rotating clock-wise 3 comes in first position.
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-20 01:14:51
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        //idr apn ne n liya h jo ki array ki size h
        //fr jo last element h usko temp variable m store kiya h
        //fr for loop apn n last s chalaya h
        int n=arr.size();
        int temp=arr[n-1];
        
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        
    }
};

//Maan lo array hai:

// [1, 2, 3, 4, 5]

// Aur temp = 5 mein last element save kar liya hai.

// Ab loop right se left chalega.
// Step	Operation	Array
// 1	arr[4] = arr[3]	[1, 2, 3, 4, 4]
// 2	arr[3] = arr[2]	[1, 2, 3, 3, 4]
// 3	arr[2] = arr[1]	[1, 2, 2, 3, 4]
// 4	arr[1] = arr[0]	[1, 1, 2, 3, 4]
// Ab dekho, har element ek position right shift ho gaya. First position par abhi bhi 1 hai.
// Ab last step kya hai?
// Humein chahiye:

// [5, 1, 2, 3, 4]

// Aur temp = 5 already save hai.

// Isliye first index par saved value rakhni hogi.

//to apn ab idr arr[0] m temp store krdege jis se first position pr 
//last element aajyega kyuki apn n temp m last element store kr rkha tha
```

*Generated on: 10/20/2026, 1:18:20 AM*
