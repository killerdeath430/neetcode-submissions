class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n =a.size();
        if (n==1)return a;
        long long mul=1,z=0,y=0;
        for (int i=0;i<n;i++){
           if (a[i]!=0) {mul*=a[i];
           }
           else {z=1;
           y++;}
        }
        vector<int>ans;
        if (y>=2){
            while(n--)ans.push_back(0);
            return ans;
        }
        for (int i=0;i<n;i++){
            if (z){
                if (a[i]==0)ans.push_back(mul);
                else ans.push_back(0);
            }
            else {
                ans.push_back(mul/a[i]);
            }
        }
        return ans;
    }
};
