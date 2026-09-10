class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<int>sub;
        sort(a.begin(),a.end());
        teller(sub,a,0);
        return ans;
    }
    void teller(vector<int>&sub,vector<int>&a,int i){
        if(i>=a.size()){
            ans.push_back(sub);
            return;
        }
        sub.push_back(a[i]);
        teller(sub,a,i+1);
        sub.pop_back();
        while(i<a.size()-1&&a[i]==a[i+1])i++;
        teller(sub,a,i+1);
    }
};
