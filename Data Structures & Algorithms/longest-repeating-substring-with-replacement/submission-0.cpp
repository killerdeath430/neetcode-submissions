class Solution {
public:
    int characterReplacement(string s, int k) {
         int n=s.size(),ans=0;
         for (char c ='A';c<='Z';c++){
           int l=0,r=0,replaced=0;
           while(r<n){
             if (s[r]==c){
              r++;
             }
             else if(s[r]!=c&&replaced<k){
               replaced++;
               r++;
             }
             else if (s[l]==c){
              l++;
             }
             else {
               l++;
               replaced--;
             }
             ans=max(ans,r-l);
           }
         }

         return ans;
    }
};
