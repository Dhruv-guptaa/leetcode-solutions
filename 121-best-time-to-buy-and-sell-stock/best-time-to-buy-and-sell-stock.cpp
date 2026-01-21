//question no. 121
// name Best time to buy and sell stock
// complexity O(n)
// approach kadane algo 


class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int  minpro = prices[0];
        int maxpro = 0;
        for(int i =1 ; i<prices.size();i++){
            minpro = min(minpro,prices[i]);
            maxpro =max(maxpro, prices[i]-minpro);

        }
        return maxpro;
    }
};