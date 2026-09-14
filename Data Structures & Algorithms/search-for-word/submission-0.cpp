class Solution {
public:
    bool t=false;
    bool exist(vector<vector<char>>& a, string ans) {
  vector<vector<bool>> visited(a.size(), vector<bool>(a[0].size(), false));
        for (int i=0;i<a.size();i++){
            for (int j=0;j<a[0].size();j++){
                teller(a,ans,"",i,j, visited);
            } 
        }
        return t;
    }
void teller(vector<vector<char>>& a, string &ans, string s, int i, int j, vector<vector<bool>>& visited){
    if(s.size()==ans.size()){
        for(int k=0;k<ans.size();k++) if(s[k]!=ans[k]) return;
        t=true;
        return; 
    }
    if(i>=a.size()||j>=a[0].size()||i<0||j<0||visited[i][j]) return;

    visited[i][j]=true;
    s.push_back(a[i][j]);
    teller(a,ans,s,i+1,j,visited);
    teller(a,ans,s,i-1,j,visited);
    teller(a,ans,s,i,j+1,visited);
    teller(a,ans,s,i,j-1,visited);
    s.pop_back();
    visited[i][j]=false; 
}
};
