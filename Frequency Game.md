## 01. Frequency Game

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/frequency-game/1)

### Problem Description

**Task:** Given an integer array arr[] consisting of positive integers, find the largest element that has the minimum frequency in the array.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [2, 2, 5, 50, 1]
```
- **Output:**
```text
50
```
- **Explanation:** All elements are having frequency 1 except 2. 50 is the maximum element with minimum frequency.

##### Example 2

- **Input:**
```text
arr[] = [3, 3, 5, 5]
```
- **Output:**
```text
5
```
- **Explanation:** Both 3 and 5 have the same frequency, so 5 should be returned.

#### Constraints

- **1.** `1 ≤ arr.size() ≤ 10⁵¹ ≤ arr[i] ≤ 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 01:40:26
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int largeAndMinFreq(vector<int>& arr) {
        // code here
        //isme apn n phele array ki size define ki h
        //fr map bnyaa h
        //fr array m loop chala kr sbhi elements ki frequency map m store ki h 
        //fr minfreq variable declare kiya h or usko integer ki sbse badi value assign krdi h
        
    //phele idr mene int minfreq=0 declare kiya tha but usme problem ye thi ki
    //Frequency (it.second)	Condition
// 	                  3 	3 < 0 → false
// 	                  1	    1 < 0 → false
// 	                  2  	2 < 0 → false

// 	Kisi bhi frequency ke liye condition true nahi hogi. Isliye minfreq 
//0 hi rahega, jabki actual minimum frequency 1 hai.

//fr apn n map m check kiya agr current element ki frequency minfreq s choti h //t
//minfreq ko it.second bna do yaani ki current element ki frequency bnado

//fr ek ans variable liya element find krne k liye jis pr given condition satisfy kregi
//loop chlakr  apn check krege kon kon se element ki frequency minfreq k equal h unme s
//jo bi max hoga wo return krdege

//dry run:
/*
Input: arr = {3, 3, 4, 6, 6, 8}

Step 1: Create frequency map
3 -> 2
4 -> 1
6 -> 2
8 -> 1

Step 2: Find minimum frequency
minfreq = INT_MAX

3 -> freq = 2 -> minfreq = 2
4 -> freq = 1 -> minfreq = 1
6 -> freq = 2 -> minfreq = 1
8 -> freq = 1 -> minfreq = 1

Minimum frequency = 1

Step 3: Find largest element with minimum frequency
ans = 0

3 -> freq = 2 -> skip (not minimum)
4 -> freq = 1 -> ans = max(0, 4) = 4
6 -> freq = 2 -> skip (not minimum)
8 -> freq = 1 -> ans = max(4, 8) = 8

Output: 8

Logic:
1. Count frequency of every element using map.
2. Find the minimum frequency.
3. Among elements having minimum frequency,
   select the largest element.
*/
        int n=arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int minfreq=INT_MAX;
        for(auto it:mp){
            if(it.second<minfreq){
                minfreq=it.second;
            }
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==minfreq){
                ans=max(ans,it.first);
            }
        }
        return ans;
        
    }
};
```

*Generated on: 10/22/2026, 1:40:04 AM*