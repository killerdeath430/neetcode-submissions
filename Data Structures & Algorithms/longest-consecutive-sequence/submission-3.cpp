class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n =a.size();
       
        set <int>seen;
        for (int i=0;i<n;i++){
            seen.insert(a[i]);
        }
        int ans=0;
        for (int x : a) {
            int count=0,curr=x;
            while (seen.find(curr) != seen.end()) {
                count++;
                curr++;
            }
            ans=max(ans,count);
}
        return ans;
    }
};
