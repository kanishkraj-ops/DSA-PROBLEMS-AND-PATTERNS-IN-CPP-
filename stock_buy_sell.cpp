#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n == 0) return 0;

    // Map to store: {day_index : max_price_available_in_the_future}
    unordered_map<int, int> futureMaxMap;
    
    int currentMax = 0;

    // Traverse backwards to fill the map with "future" complements
    // We start from the last day and move to the first
    for (int i = n - 1; i >= 0; i--) {
        futureMaxMap[i] = currentMax;
        
        // Update the max seen so far to be used by the day to its left
        currentMax = max(currentMax, prices[i]);
    }

    int max_profit = 0;

    // Calculate the profit by treating each day as a 'buy' day
    // and looking up its 'complement' (the future max) in the map
    for (int i = 0; i < n; i++) {
        int potentialProfit = futureMaxMap[i] - prices[i];
        if (potentialProfit > max_profit) {
            max_profit = potentialProfit;
        }
    }

    return max_profit;
}

int main() {
    vector<int> stockPrices = {7, 1, 5, 3, 6, 4};
    
    int result = maxProfit(stockPrices);
    
    cout << "Max Profit: " << result << endl;
    
    return 0;
}