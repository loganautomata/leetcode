#include "header.hpp"

/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int sub_len = 0;
        unordered_map<char, int> map;

        for (int i = 0; i < s.length(); i++) {
            if (map.find(s[i]) == map.end()) {
                sub_len += 1;
                map[s[i]] = i;
            } else {
                for (int j = i - sub_len; j < map[s[i]]; j++) {
                    map.erase(s[j]);
                }
                sub_len = i - map[s[i]];
                map[s[i]] = i;
            }

            res = max(res, sub_len);
        }

        return res;
    }
};
// @lc code=end

// TODO: 用数组替代hash table.
