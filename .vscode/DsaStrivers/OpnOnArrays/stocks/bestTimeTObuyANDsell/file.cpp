#include <iostream>
/*
    we just have to find the max profit that we will get in an array
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int mini=prices[0];
        int cost{0};

        for (int i{0};i<prices.size();i++){
            int cost = prices[i]-mini;//checking the profit by sub 
            maxprofit = max(maxprofit,cost);
            mini = min(mini,prices[i]);
            
        }
        return maxprofit;



    }
};