class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l=0,r=n-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(l<=r){
            while (!('a'<=s[l]&&s[l]<='z' || s[l]>='0'&&s[l]<='9')&&l<r)l++;
            while(!('a'<=s[r]&&s[r]<='z' || s[r]>='0'&&s[r]<='9')&&r>l) r--;
            if (s[l]!=s[r])return false;
            l++;r--;
        }
        return true;
    }
};
