/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为 K 的子数组
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int sum = 0;
        unordered_map<int, int> mp({ {0, 1} });

        for (auto num : nums) {
            sum += num;
            if (mp.find(sum - k) != mp.end())
                res += mp[sum - k];
            mp[sum]++;
        }

        return res;
    }
};
// @lc code=end

