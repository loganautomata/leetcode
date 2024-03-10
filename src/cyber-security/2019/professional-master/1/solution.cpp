#include "header.hpp"

class Solution {
public:
    int calScore(vector<int> &arr) {
        int stat = 0;
        int res = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 2) {
                int score = stat + 1;

                stat++;
                score *= 2;
                res += score;
            } else {
                stat = 0;
                res += arr[i];
            }
        }

        return res;
    }
};