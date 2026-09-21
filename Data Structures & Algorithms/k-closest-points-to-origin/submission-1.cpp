class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxi;
        for(auto& x:points){
            int d=x[0]*x[0]+x[1]*x[1];
            maxi.push({d,x});
            if(maxi.size()>k)maxi.pop();
        }
            vector<vector<int>>ans;
            for (int i=0;i<k;i++){
                ans.push_back(maxi.top().second);
                maxi.pop();
            }
            return ans;
    }
};
