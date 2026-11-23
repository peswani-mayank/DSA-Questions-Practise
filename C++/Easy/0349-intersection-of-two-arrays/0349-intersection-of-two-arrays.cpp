class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        sort(nums1.begin(),nums1.end()); //time:o(n1logn1)
        sort(nums2.begin(),nums2.end()); //time:o(n22logn2)
        vector<int>ans;
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                if(ans.size()==0 || ans.back()!=nums1[i]){
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return ans;

        
    }
};
//total time:o(n1logn1+n2logn2)

//method 2 using hashing 

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

//         // First array ke elements store karne ke liye set
//         unordered_set<int> st;

//         // First array ke saare elements set mein insert karo
//         for(int i = 0; i < nums1.size(); i++) {
//             st.insert(nums1[i]);
//         }

//         // Common unique elements store karne ke liye
//         vector<int> ans;

//         // Second array ko traverse karo
//         for(int i = 0; i < nums2.size(); i++) {

//             // Check karo ki current element set mein present hai ya nahi
//             if(st.find(nums2[i]) != st.end()) {

//                 // Common element answer mein insert karo
//                 ans.push_back(nums2[i]);

//                 // Element ko erase karo taaki duplicate na aaye
//                 st.erase(nums2[i]);
//             }
//         }

//         return ans;
//     }
// };

//time: o(n1+n2)
//space:o(n1+min(n1,n2))
