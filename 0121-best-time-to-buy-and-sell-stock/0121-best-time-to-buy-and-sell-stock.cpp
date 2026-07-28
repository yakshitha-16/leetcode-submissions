class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int maxi = 0;
        int sum = 0 ;

        for(int i=1;i<n;i++)
        {
            sum += prices[i]-prices[i-1];
            if(sum<0)
            sum =0 ;
            maxi = max (maxi,sum);
        }
        if(maxi>0)
        return maxi ;
        
        else
        return 0 ;

    }
};