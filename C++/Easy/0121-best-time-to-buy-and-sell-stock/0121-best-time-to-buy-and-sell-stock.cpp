class Solution {
public:

// Sabse pehle hum minPrice = INT_MAX initialize karte hain, taaki abhi tak ka minimum stock price track kar sakein, aur maxProfit = 0 rakhte hain kyunki starting mein koi profit nahi hai. Uske baad hum for loop ki help se prices array ko traverse karte hain. Har iteration mein check karte hain ki current price (prices[i]) ab tak ke minimum price (minPrice) se chhota hai ya nahi. Agar chhota hai, toh minPrice update kar dete hain, kyunki hume stock sabse kam price par buy karna hai. Uske baad profit = prices[i] - minPrice calculate karte hain, jo current price par stock sell karne se milne wala profit hai. Agar ye profit ab tak ke maximum profit (maxProfit) se zyada hai, toh maxProfit update kar dete hain. Ye process array ke end tak continue hota hai. Finally, hum maxProfit return kar dete hain, jo ek baar stock buy aur ek baar sell karke milne wala maximum possible profit hota hai.
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            int profit=prices[i]-minPrice;
            if(profit>maxProfit){
                maxProfit=profit;
            }
        }

        return maxProfit;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)

// Iteration 1: i = 0
// - Current price = 7
// - 7 < INT_MAX → minPrice = 7
// - Profit = 7 - 7 = 0
// - maxProfit = 0


// Iteration 2: i = 1
// - Current price = 1
// - 1 < 7 → minPrice = 1
// - Profit = 1 - 1 = 0
// - maxProfit = 0
// Yahan humne ab tak ka cheapest buying price find kar liya.

// Iteration 3: i = 2
// - Current price = 5
// - 5 < 1? No.
// - Profit = 5 - 1 = 4
// - 4 > 0 → maxProfit = 4


// Iteration 4: i = 3
// - Current price = 3
// - 3 < 1? No.
// - Profit = 3 - 1 = 2
// - 2 > 4? No.
// - maxProfit = 4 hi rahega.


// Iteration 5: i = 4
// - Current price = 6
// - 6 < 1? No.
// - Profit = 6 - 1 = 5
// - 5 > 4 → maxProfit = 5


// Iteration 6: i = 5
// - Current price = 4
// - 4 < 1? No.
// - Profit = 4 - 1 = 3
// - 3 > 5? No.
// - maxProfit = 5 hi rahega.