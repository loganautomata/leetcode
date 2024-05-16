/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */
# include "header.hpp"

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int pre = nums[0];

        for(int i = 1; i < nums.size(); i++){
            pre = max(pre + nums[i], nums[i]);
            res = max(pre, res);
        }

        return res;
    }
};
// @lc code=end

