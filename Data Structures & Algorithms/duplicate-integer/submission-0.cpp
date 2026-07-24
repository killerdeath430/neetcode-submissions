class Solution {
public:
    bool hasDuplicate(vector<int>& a) {
        int n=a.size();
        map<int,int>freq;
        for (int i=0;i<n;i++){
            freq[a[i]]++;
        }
        for (auto it:freq){
            if (it.second>1)return true;
        }
        return false;
    }
};