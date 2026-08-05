class Solution {
public:
    vector<int> twoSum(vector<int>& a, int y) {
        int n=a.size();
       map<int,int>mpp;
       for (int i=0;i<n;i++){
          mpp[a[i]]=i+1;
       }
       for (int i=0;i<n;i++){
         if (mpp.find(y-a[i])!=mpp.end()&&mpp[y-a[i]]!=i+1){
            return {i+1,mpp[y-a[i]]};
         }
       }
       return {};
    }
};
