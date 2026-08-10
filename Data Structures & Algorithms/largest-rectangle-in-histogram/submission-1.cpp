class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int n =a.size();
         vector<int>pse(n,-1),nse(n,n);
         stack<int>st;
         for (int i=0;i<n;i++){
            while(!st.empty()&&a[st.top()]>=a[i]){
                st.pop();
            }
            if (!st.empty())pse[i]=st.top();
           
            st.push(i);
         }
         while(!st.empty()){
            st.pop();
         }
         
         for (int i=n-1;i>=0;i--){
            while(!st.empty()&&a[st.top()]>=a[i]){
                st.pop();
            }
            if (!st.empty())nse[i]=st.top();
      
            st.push(i);
         }
         
         int  ans = 0;

          for (int i=0;i<n;i++){
            pse[i]+=1;
            nse[i]-=1;
            ans=max(ans,a[i]*(nse[i]-pse[i]+1));
          }
return ans;
    }
};
