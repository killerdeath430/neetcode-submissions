class Solution {
public:
    int carFleet(int y, vector<int>& a, vector<int>& s) {
        int n = s.size();
        vector<pair<int,int>> cars(n);
        for (int i = 0; i < n; i++) cars[i] = {a[i], s[i]};
        sort(cars.rbegin(), cars.rend()); // position descending

        vector<double> seen;
        for (int i = 0; i < n; i++) {
            seen.push_back((y - cars[i].first) / (double)cars[i].second);
        }

        int count = 0;
        double prev = 0;
        for (int i = 0; i < n; i++) {
            if (prev < seen[i]) count++;
            prev = max(prev, seen[i]);
        }
        return count;
    }
};