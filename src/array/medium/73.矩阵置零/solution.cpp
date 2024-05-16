/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */
#include "header.hpp"
#include <unordered_set>

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows, cols;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);                    cols.insert(j);
                }
            }
        }
        for (auto i : rows) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[i][j] = 0;
            }
        }
        for (auto j : cols) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][j] = 0;
            }
        }
    }
};
// @lc code=end

