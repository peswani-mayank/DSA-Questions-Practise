class Solution {
    public int majorityElement(int[] arr) {
        int candidate = 0;
        int count = 0;

        // Step 1: Find a possible majority element
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } 
            else if (num == candidate) {
                count++;
            } 
            else {
                count--;
            }
        }

        // Step 2: Verify the candidate
        count = 0;

        for (int num : arr) {
            if (num == candidate) {
                count++;
            }
        }

        if (count > arr.length / 2) {
            return candidate;
        }

        return -1;
    }
}