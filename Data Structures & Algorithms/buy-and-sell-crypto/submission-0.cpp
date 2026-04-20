class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = std::numeric_limits<int>::max();
        int profit = 0;

        for (auto x : prices){
            cheapest = min(cheapest, x);
            profit = max(profit, x-cheapest);
        }
        return profit;
    }
};
