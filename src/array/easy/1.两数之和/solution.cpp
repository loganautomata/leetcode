#include "header.hpp"

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> res;
        unordered_map<int, int> hash_map;

        for (int i = 0; i < nums.size(); i++) {
            int num = target - nums[i];
            if (hash_map.find(num) != hash_map.end()) {
                res.push_back(hash_map[num]);
                res.push_back(i);

                goto end;
            } else {
                hash_map[nums[i]] = i;
            }
        }

    end:
        return res;
    }
};
// @lc code=end
