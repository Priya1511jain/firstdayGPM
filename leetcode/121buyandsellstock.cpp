 int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;
        for(int j=0; j<prices.size(); j++)
        {
            minPrice = min(minPrice,prices[j]);
            maxPro = max(maxPro, prices[j]-minPrice);
        }
        return maxPro;
    }
