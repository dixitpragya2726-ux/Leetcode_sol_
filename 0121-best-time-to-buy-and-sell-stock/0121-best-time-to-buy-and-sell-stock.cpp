class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = prices[0];
        int ans = 0;
        int a =0;
        for(int i =1;i<prices.size();i++){
            if(prices[i-1]>prices[i]){
                 a = prices[i];
            }
            else{
                 a = prices[i-1];
            }
             x = min(a,x);
            int profit = prices[i]-x;
             ans = max(ans,profit);

        }
    return ans ;
    }
};