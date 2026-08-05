class Solution {
public:
    int maxArea(vector<int>& a) {
         int n = a.size();
        int l=0,r=n-1;
        int prev=0;
        while(l<r){
            int mini=min(a[l],a[r]);
            if (prev<mini*(r-l)){
                prev=mini*(r-l);

            }
            if (a[l]>a[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return prev;
    }
};
