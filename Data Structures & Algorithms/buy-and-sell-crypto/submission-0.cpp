class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n =a.size(),maxi=0,ans=0;
        for (int i=n-1;i>=0;i--){
            maxi=max(maxi,a[i]);
            ans=max(ans,maxi-a[i]);
        }
        return ans;
    }
};
