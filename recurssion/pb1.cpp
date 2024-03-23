class Solution {

private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int s) {
        if (s >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        
        for (int i = s; i < nums.size(); i++) {
            swap(nums[s], nums[i]);
            solve(nums, ans, s+1);
            swap(nums[s], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};