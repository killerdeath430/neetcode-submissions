class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& a, int k) {
        vector<vector<int>>ans; 
        vector<int>sub;
        teller(ans,sub,0,a,k);
        return ans;
    }
    void teller(vector<vector<int>>&ans,vector<int>&sub,int i,vector<int>&a,int k) {
        if(k==0){
            ans.push_back(sub);
            return;
        }
        if(k<0||i>=a.size()){
            return;
        }
        sub.push_back(a[i]);
        teller(ans,sub,i,a,k-a[i]);
        sub.pop_back();
        teller(ans,sub,i+1,a,k);
    }
};
