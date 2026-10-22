## 01. Highest and Lowest Frequencies

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/difference-between-highest-and-lowest-occurrence4613/1)

### Problem Description

**Task:** Given an array, the task is to find the difference between the highest occurrence and lowest occurrence of any numbers in an array. If only one type of element is present in the array return 0

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [1, 2, 2]
```
- **Output:**
```text
1
```
- **Explanation:** Lowest occurring element (1) occurs once. Highest occurring element (2) occurs 2 times

##### Example 2

- **Input:**
```text
arr[] = [7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5]
```
- **Output:**
```text
2
```
- **Explanation:** Lowest occurring element (2) occurs once. Highest occurring element (7) occurs 3 times

#### Constraints

- **1.** `1 <= arr.size() <= 10⁶`
- **2.** `1 <= arr[i] <= 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-23 02:40:30
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int findDiff(vector<int>& arr) {
        // code here
    //isme apn n array ki sizze input li h
    //fr frequency count k map bnaya h or loop chala kr map m frequecy store ki h
    //fr 2 variable le liye h maxfreq or minfreq
    //maxfreq ko 0 s initilaize kiya h agar aage frequecny kisi ki 0 s badi aaye to apn 
    //usko maxfreq m store krde means agar kisi ki freuency maxfreq s jyada aaye to 
    //apn maxfreq ko update krdege highest frequency s
    //min frequency ko n s initialise kiya because maximum frequency n hi ho skti h
    //baaki sb n s choti hi hogi taaki compare kre or agar apn ko kahi bi
    //frequency n s choti milti h to apn usko minfreq m update krdenge
    //fr last m maxfreq or min freq ka difference return krdiya h
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int maxfreq=0;
        int minfreq=n;
        for(auto it:mp){
            if(it.second>maxfreq){
                maxfreq=it.second;
            }
            if(it.second<minfreq){
                minfreq=it.second;
            }
            
        }
        return maxfreq-minfreq;
    }
};
```

*Generated on: 10/23/2026, 2:47:21 AM*
