class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> n;
        vector<int>ans;
        if(nums.size() == 0 ) return 0;
        for(auto u : nums) {
            n.insert(u);
        }
        for(auto u : n) {
            ans.push_back(u);
        }
        int len = 1, maxlen = -1, m = ans.size();
        for(int i = 0; i < m - 1; i++) {
            if(ans[i] + 1 == ans[i + 1]) {
                len++;
            }else {
                maxlen = max(len , maxlen);
                len = 1;
            }
        }
        maxlen = max(len , maxlen);
        return maxlen;

    }
};
