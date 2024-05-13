/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int left = 0;
        int right = p.size() - 1;

        if (p.size() > s.size())
            return res;

        unordered_map<char, pair<int, deque<int>>> mp;
        for (char c : p)
            mp[c].first++;

        for (int i = left; right < s.size() && i <= right; right = left + p.size() - 1, i++) {
            if (mp.find(s[i]) == mp.end()) {
                for (int j = left; j < i; j++) {
                    mp[s[j]].first++;
                    mp[s[j]].second.pop_front();
                }
                left = i + 1;
            } else if (mp[s[i]].first == 0) {
                for (int j = left; j < mp[s[i]].second.front(); j++) {
                    mp[s[j]].first++;
                    mp[s[j]].second.pop_front();
                }
                left = mp[s[i]].second.front() + 1;
                mp[s[i]].second.pop_front();
                mp[s[i]].second.push_back(i);
            } else {
                mp[s[i]].first--;
                mp[s[i]].second.push_back(i);
                if (i == right) {
                    mp[s[left]].first++;
                    mp[s[left]].second.pop_front();
                    res.push_back(left);
                    left++;
                }
            }
        }

        return res;
    }
};
// @lc code=end
