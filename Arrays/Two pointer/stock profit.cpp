/*
profit=maxi-mini
then in iteration consider in it, 
*/
int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=prices[0];

        for(int i=1;i<prices.size();i++){
            maxi=max(maxi,prices[i]-mini);
            mini=min(mini,prices[i]);
        }

        return maxi;
 }