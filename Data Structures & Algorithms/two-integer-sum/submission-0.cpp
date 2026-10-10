class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i + 1;
        }
        for (int i = 0; i < nums.size();i++) {
            int miss = target - nums[i];
            if(m[miss] && i + 1 != m[miss]) {
                ans[0] = i;
                ans[1] = m[miss] - 1; 
                break;
            }
        }
        return ans;
    }
};
