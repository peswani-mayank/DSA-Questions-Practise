class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            //method 1 to swap
            
            
            // int temp=arr[i];
            // arr[i]=arr[min];
            // arr[min]=temp;
            
            //method 2 to swap
            swap(arr[i],arr[min]);
        }
    }
};

//swap atindex 0 and minimum index [0 to n-1] //here we take n-1 because
//swap atindex 1 and minimum index [1 to n-1]
//swap atindex 2 and minimum index [2 to n-1] : here we start from index 2 because element at index 0 and 1 are sorted  so we do not need to include them
//swap atindex 3 and minimum index [3 to n-1]
//and  so on 
//inner loop (for inti=0;i<n-1;i++)  i ye decide krega ki hume konsi posiiton ko fix krna h 
//outer loop (for int j=i+1;j<n;j++) j ka kaam h jo remaining part h unsortedd arrray ka usme search krna 
//[13, 46, 24, 52, 20, 9]
// ↑   ↑
// i   j


//example 
// Initial array: 13 46 24 52 20 9

// ====================================
// i = 0
// Starting minimum: arr[0] = 13
// j = 1 -> Compare arr[1] = 46 with arr[0] = 13
// j = 2 -> Compare arr[2] = 24 with arr[0] = 13
// j = 3 -> Compare arr[3] = 52 with arr[0] = 13
// j = 4 -> Compare arr[4] = 20 with arr[0] = 13
// j = 5 -> Compare arr[5] = 9 with arr[0] = 13 -> Smaller found! min = 5
// Minimum found: 9 at index 5
// Before swap: 13 46 24 52 20 9
// After swap:  9 46 24 52 20 13

//same like this we wiil do for all iterations
