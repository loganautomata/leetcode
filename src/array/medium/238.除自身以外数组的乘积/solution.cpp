/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int mul = 1;

        for (int i = 0; i < nums.size(); i++) {
            res[i] *= mul;
            mul *= nums[i];
        }

        mul = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= mul;
            mul *= nums[i];
        }

        return res;
    }
};
// @lc code=end

