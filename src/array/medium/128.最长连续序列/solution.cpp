/*
 * @lc app=leetcode.cn id=128 lang=cpp
 *
 * [128] 最长连续序列
 */
// 快排
#include "header.hpp"

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        int res;
        int len;
        vector<int>::iterator begin;
        vector<int>::iterator end;

        sort(nums.begin(), nums.end());

        for (len = 0, res = 0, begin = nums.begin(), end = nums.begin(); end < nums.end(); end++) {
            if (end == nums.begin() || *(end - 1) == *end - 1) {
                len += 1;
            } else if (*(end - 1) == *end) {
                continue;
            } else {
                len = 1;
                begin = end;
            }

            res = max(res, len);
        }

        return res;
    }
};
// @lc code=end
