class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (auto u : nums) {
            m[u]++;
        }
        vector<pair<int, int>> topk;
        for (auto [x, y] : m) {
            topk.push_back({y, x});
        }
        sort(topk.rbegin(), topk.rend());
        vector<int> ans;
        for (auto [x, y] : topk) {
            if (k <= 0) break;
            ans.push_back(y);
            k--;
        }
        return ans;
    }
};
