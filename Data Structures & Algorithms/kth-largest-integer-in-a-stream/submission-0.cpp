class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> mini;
    int k ;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int x:nums) mini.push(x);
    }
    
    int add(int val) {
        mini.push(val);
        while(mini.size()>k){
            mini.pop();
        }
        return mini.top();
    }
};
