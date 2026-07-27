class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN ;
        int maxi1 = INT_MIN ; 
        for(int i : nums)
        {
            if(i > maxi) 
            {
                maxi1 = maxi ;
                maxi = i ;  
            }

            else if( i > maxi1)
            maxi1 = i ;
        }

        return ((maxi-1)*(maxi1-1)) ;
    }
};