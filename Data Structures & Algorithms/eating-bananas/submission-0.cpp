class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n =a.size(),maxi=-1,ans=0;
        for (int i=0;i<n;i++){
            maxi=max(maxi,a[i]);
        }
        int low=1,high=maxi;
        while(low<=high){
            int mid = low+(high-low)/2;
            if (hours(a,h,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;                
            }
        }
        return ans;
    }
    int hours(vector<int> &a, int h,int &mid){
        int n =a.size(),count=0;
        for (int i=0;i<n;i++){
            if (a[i] > 0) {
                count += (a[i]+mid-1)/mid;  
            }
        }
        return count;
    }
};
