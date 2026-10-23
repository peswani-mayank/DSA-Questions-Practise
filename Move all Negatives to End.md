## 01. Move all Negatives to End

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1)

### Problem Description

**Task:** Given an unsorted array arr[ ] having both negative and positive integers. Place all negative elements at the end of the array without changing the order of positive elements and negative elements.Note: Don't return any array, just in-place on the array.Examples:Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]

#### Examples

##### Example 1

- **Output:**
```text
[7, 9, 10, 11, -5, -3, -4, -1]
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-23 18:55:37
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
    //isme apn n phele arr ki size deine ki 
    //fr ek temp vector bnaya jisme apn phele positive numbers ko store krege
    //fr saare negative numbers ko store krege
    //yaani ki apn arr s temp m element daal rahe h
    //phele positive daale fr negative daale
//fr loop chalakr temp m jo bi elements the unko fr s arr m copy 
//krdiya hai
        int n=arr.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                temp.push_back(arr[i]);
            }
        }
       for(int i=0;i<n;i++){
           arr[i]=temp[i];
       }
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-23 18:53:15
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                temp.push_back(arr[i]);
            }
        }
       for(int i=0;i<n;i++){
           arr[i]=temp[i];
       }
        
    }
};
```

*Generated on: 10/24/2026, 12:37:09 AM*