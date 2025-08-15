class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int low=prices[0],n=prices.size(),profit=0;
        for(int i=0;i<n;i++){
            if(low>prices[i]){
                low = prices[i];
                
            }
            profit = max(profit,prices[i]-low);
        }
        return profit;

    }
    
};