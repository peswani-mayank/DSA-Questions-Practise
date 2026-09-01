class Solution {
public:
    double findMedian(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        // Odd number of elements
        if (n % 2 != 0) {
            return arr[n / 2];
        }

        // Even number of elements
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
};