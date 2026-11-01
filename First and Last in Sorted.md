## 01. First and Last in Sorted

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1)

### Problem Description

**Task:** Given a sorted array arr[] with possibly some duplicates, find the first and last occurrences of an element x in the given array.Note: If the number x is not found in the array then return both the indices as -1.Examples:Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5

#### Examples

##### Example 1

- **Output:**
```text
[2, 5]
```
- **Explanation:** First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5

##### Example 2

- **Input:**
```text
arr[] = [1, 3, 5, 5, 5, 5, 7, 123, 125], x = 7
```
- **Output:**
```text
[-1, -1]
```
- **Explanation:** No occurrence of 4 in the array, so, output is [-1, -1]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-11-01 22:52:14
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        
        //isme phele array ki size define ki h fr 2 variables liye h
        //first wala first occurrence btayega or last wala last occurrence btayega
        //or in dono variables ko -1 s start kiya iska mtlb h ki starting m abhi 
        //target element mila nhi h 
        //fr loop chalaya h or check krege ki array ka element target element k equal 
        //h ya nhi h or agar hai to fr wo check krege ki jo first wala variable h wo -1
        //hai ya nhi h agar h to fr first ko us element k index number s update krdega 
        //or last wale ko bi update krdega 
        
        //or fr first or last dono return krdega
        // for(int i=0;i<n;i++){
        //     if(arr[i]==x){
        //         if(first==-1){
        //             first=i;
        //         }
        //         last=i;
                
        //     }
        // }
        // return {first,last};
        int n=arr.size();
        int first=-1;
        int last=-1;
        
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                first=mid;
                high=mid-1;
            }else if(arr[mid]>x){
                high=mid-1;
            }else if(arr[mid]<x){
                low=mid+1;
            }
        }
        int low1=0;
        int high1=n-1;
         while(low1<=high1){
            int mid=low1+(high1-low1)/2;
            if(arr[mid]==x){
                last=mid;
                low1=mid+1;
            }else if(arr[mid]>x){
                high1=mid-1;
            }else if(arr[mid]<x){
                low1=mid+1;
            }
        }
        return{first,last};
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-11-01 22:21:42
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        
        //isme phele array ki size define ki h fr 2 variables liye h
        //first wala first occurrence btayega or last wala last occurrence btayega
        //or in dono variables ko -1 s start kiya iska mtlb h ki starting m abhi 
        //target element mila nhi h 
        int n=arr.size();
        int first=-1;
        int last=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                if(first==-1){
                    first=i;
                }
                last=i;
                
            }
        }
        return {first,last};
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-11-01 20:29:31
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int first=-1;
        int last=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                if(first==-1){
                    first=i;
                }
                last=i;
                
            }
        }
        return {first,last};
    }
};
```

*Generated on: 11/1/2026, 10:54:41 PM*