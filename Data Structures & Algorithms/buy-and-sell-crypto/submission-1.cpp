class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0; 
        for(int i=0; i<prices.size(); i++){
            int b=prices[i]; 
            for(int j=i+1; j<prices.size(); j++){
                int s=prices[j];
                res=max(res,s-b); 
            }
        }
        return res;
    }
};
