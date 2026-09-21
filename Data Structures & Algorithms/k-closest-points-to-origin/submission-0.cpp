class Solution {
public:
        struct cmp{
            bool  operator()(const vector<int>&a,const vector<int>&b){
                return a[0]*a[0]+a[1]*a[1]>b[0]*b[0]+b[1]*b[1];
            }
        };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,cmp>mini;
        for(auto& x:points)mini.push(x);
        vector<vector<int>>ans;
        for (int i=0;i<k;i++){
            ans.push_back(mini.top());
            mini.pop();
        }
        return ans;
    }
};
