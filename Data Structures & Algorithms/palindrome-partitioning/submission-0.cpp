class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>part;
        teller(ans,s,part,0);
        return ans;
    }
    void teller (vector<vector<string>>&ans,string &s,vector<string>&part,int i){
        if(i>=s.length()){
            ans.push_back(part);
            return;
        }
        for (int j=i;j<s.length();j++){
            if(isPali(s,i,j)){
                part.push_back(s.substr(i, j - i + 1));
                teller(ans,s,part,j+1);
                part.pop_back();
            }
        }
    }
     bool isPali(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
