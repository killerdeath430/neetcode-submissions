class Solution {
public:
    int lengthOfLongestSubstring(string a) {
      int n =a.size(),ans=0;
      int l=0,r=0;
      set<int>seen;
      while(r<n){
        while(seen.find(a[r])!=seen.end()){
          seen.erase(a[l]);
            l++;
        }
        seen.insert(a[r]);
        ans=max(ans,r-l+1);
        r++;
      }
      return ans;
    }
};
