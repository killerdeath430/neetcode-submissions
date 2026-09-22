class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m=tasks.size();
        unordered_map<char,int>freq;
        for(int i=0;i<m;i++){
            freq[tasks[i]]++;
        }
        int maxi=0;
        for(auto it:freq){
            if(it.second>maxi)maxi=it.second;
        }
        int counter=0;
        for(auto it:freq){
            if(it.second==maxi)counter++;
        }
        return max(m,(maxi-1)*(n+1)+counter);
    }
};
