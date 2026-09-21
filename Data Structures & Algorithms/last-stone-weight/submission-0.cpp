class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxi;
        for (int x:stones)maxi.push(x);
        while(maxi.size()>1){
            int first=maxi.top();
            maxi.pop();
            int sec=maxi.top();
            maxi.pop();
            int next=first-sec;
            maxi.push(next);
        }
        return maxi.top();
    }
};
