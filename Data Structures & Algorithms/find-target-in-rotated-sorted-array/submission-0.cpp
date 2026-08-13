class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int low =0,high = n-1;
        while (low<=high){
            int mid  = low+(high-low)/2;
            if (a[mid]==target) return mid;
            if (a[high]>a[mid]){
                if(a[mid]>target || a[high]<target){
                    high=mid-1;
                }
                else {
                    low=mid+1;
                }
            }
            else {
                if(a[mid]<target||a[low]>target){
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
