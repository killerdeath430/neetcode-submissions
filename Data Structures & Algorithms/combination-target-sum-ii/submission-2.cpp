class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& a, int k) {
        vector<vector<int>>ans;
        sort(a.begin(), a.end());
        vector<int>sub;
        teller(ans,sub,a,0,0,k);
        vector<vector<int>>ans1;
        return ans;
    }
    void teller(vector<vector<int>>&ans,vector<int>&sub,vector<int>&a,int i,int sum,int k){
        if(i>=a.size()){
            if(sum==k)ans.push_back(sub);
        return;
        }
        if(sum>k)return;
        sum+=a[i];
        sub.push_back(a[i]);
      
        teller(ans,sub,a,i+1,sum,k);
        sum-=a[i];
        sub.pop_back();
    
         while (i + 1 < a.size() && a[i] == a[i + 1]) {
            i++;
        }
        teller(ans,sub,a,i+1,sum,k);

    }
};
