/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> temp(n);

        for (int i = 0; i < n; i++)
            temp[i] = matrix[0][i];
    }
};
// @lc code=end

