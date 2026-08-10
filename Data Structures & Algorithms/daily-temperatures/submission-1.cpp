class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack <int>st;
        int n =a.size();
        vector<int>ans(n,0);
        for (int i=n-1;i>=0;i--){
           int p=0;
            while(!st.empty()&&a[st.top()]<=a[i]){
                p=st.top();
                st.pop();
            }
 
              if(!st.empty()) ans[i]=st.top()-i;
                st.push(i);
       


        }
return ans;
    }
};
