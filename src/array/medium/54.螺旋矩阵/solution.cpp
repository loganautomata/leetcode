/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */
#include "header.hpp"

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;

        while (true) {
            for (int i = left; i <= right; i++)
                res.push_back(matrix[top][i]);
            if (++top > bottom) break;
            for (int i = top; i <= bottom; i++)
                res.push_back(matrix[i][right]);
            if (--right < left) break;
            for (int i = right; i >= left; i--)
                res.push_back(matrix[bottom][i]);
            if (--bottom < top) break;
            for (int i = bottom; i >= top; i--)
                res.push_back(matrix[i][left]);
            if (++left > right) break;
        }

        return res;
    }
};
// @lc code=end

