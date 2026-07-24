class Solution {
public:
    vector<int> twoSum(vector<int>& a, int y) {
        map<int,int>seen;
        int n=a.size();
        for (int i=0;i<n;i++){
            if (seen.find(y-a[i])!=seen.end()){
                return {seen[y-a[i]],i};
            }
            seen[a[i]]=i;
        }
        return {};
    }
};
