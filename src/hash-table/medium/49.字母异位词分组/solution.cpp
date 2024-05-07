/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        
        for (auto str : strs) {
            string key = str;
            sort(key.begin(), key.end());

            if (mp.find(key) == mp.end()) {
                mp[key] = vector<string>{str};
            } else {
                mp[key].push_back(str);
            }
        }

        for (auto kv : mp) {
            res.push_back(kv.second);
        }

        return res;
    }
};
// @lc code=end

