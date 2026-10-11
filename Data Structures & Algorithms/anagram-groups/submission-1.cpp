class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int l = strs.size();
        map<string, vector<string>> m;
        for (int i = 0; i < l; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            m[s].push_back(strs[i]);
        }
        for(auto [str, vec] : m) {
            ans.push_back(vec);
        }
        return ans;
    }
};
