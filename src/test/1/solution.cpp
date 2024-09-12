#include "header.hpp"
#include <algorithm>
#include <regex>
#include <sstream>
#include <vector>

class Solution {
public:
    vector<int> rotate(vector<vector<int>> arr) {
        vector<int> res;
        int left = 0;
        int right = arr[0].size() - 1;
        int top = 0;
        int bottom = arr.size() - 1;

        while (left <= right && top <= bottom) {
            // 向右走
            for (int i = left; i <= right; i++) {
                res.push_back(arr[top][i]);
            }
            top++;
            if (top > bottom)
                break;

            // 向下走
            for (int i = top; i <= bottom; i++) {
                res.push_back(arr[i][right]);
            }
            right--;
            if (left > right)
                break;

            // 向左走
            for (int i = right; i >= left; i--) {
                res.push_back(arr[bottom][i]);
            }
            bottom--;
            if (top > bottom)
                break;

            // 向上走
            for (int i = bottom; i >= top; i--) {
                res.push_back(arr[i][left]);
            }
            left++;
            if (left > right)
                break;
        }

        return res;
    }
};