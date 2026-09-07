class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>>ans;
        vector<int>sub;
        teller(ans,sub,0,a);
        return ans;
    }
    void teller (vector<vector<int>>&ans,vector<int>&sub,int i,vector<int>&a){
        if(i>=a.size()){
            ans.push_back(sub);
            return;

        }
        sub.push_back(a[i]);
        teller(ans,sub,i+1,a);
        sub.pop_back();
        teller(ans,sub,i+1,a);
    }
};
