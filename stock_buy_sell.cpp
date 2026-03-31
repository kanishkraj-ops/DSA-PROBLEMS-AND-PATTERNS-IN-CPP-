#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int best_buy = prices[0] ;
    int max_profit = 0;
    
    for(int i =0;i<n;i++){
        if(prices[i] > best_buy){
            max_profit = max(max_profit,prices[i]-best_buy);
        }
        best_buy = min(prices[i],best_buy);
    }
    return max_profit;

}

int main() {
    vector<int> stockPrices = {7, 6,5,4,3,2};
    
    int result = maxProfit(stockPrices);
    
    cout << "Max Profit: " << result << endl;
    
    return 0;
}