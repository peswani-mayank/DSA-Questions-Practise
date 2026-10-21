## 01. Twice Counter

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/twice-counter4236/1)

### Problem Description

**Task:** Given a list of words. Count the number of words that appear exactly twice in the list.

#### Examples

##### Example 1

- **Input:**
```text
list[] = [Geeks, For, Geeks]
```
- **Output:**
```text
1
```
- **Explanation:** 'Geeks' is the only word that appears twice.

##### Example 2

- **Input:**
```text
list[] = [Tom, Jerry, Thomas, Tom, Jerry, Courage, Tom, Courage]
```
- **Output:**
```text
2
```
- **Explanation:** 'Jerry' and 'Courage' are the only words that appears twice.

#### Constraints

- **1.** `1 <= list.size() <= 10⁴`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 00:27:06
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int countWords(vector<string> &list) {
        // code here.
        //isme apn n phele map bnaya or fr loop chalya string wali list m
        //or isme apn n sbhi strings ki frequencies ko count krke map m store 
        //ki h fr count variable bnaya h fr apn frequecny wale map m chalege
        //usme loop chalaya or check kiya ki jis bi string ki frequency 2 
        //usko count increase krte jao or total return apn ko jin bi string ki frequecy 2
        //h to is loop m wo check krega jin bi string ki frequecy 2 hoga utna count
        //increase hota rhega or count return hojyega
        map<string,int>mp;
        for(auto it:list){
            mp[it]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second==2){
                count++;
            }
        }
        return count;
    }
};
```

*Generated on: 10/22/2026, 12:29:39 AM*
