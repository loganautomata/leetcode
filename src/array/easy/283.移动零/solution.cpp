/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int i = 0;

        for (int j = 0; j < nums.size(); j++)
            if (nums[j] != 0)
                nums[i++] = nums[j];
        while (i < nums.size())
            nums[i++] = 0;
    }
};
// @lc code=end
