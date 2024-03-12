#include "header.hpp"

class Solution {
private:
public:
    pair<int, int> calDate(int year, int sum) {
        int month = 1;
        int day = sum;
        int feb_add = 0;
        vector<int> month_day_arr = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) feb_add = 1;
        
        for (auto i : month_day_arr) {
            int month_day = i;

            if (i == 28) month_day += feb_add;
            if (day - month_day  <= 0) break;
            else {
                day -= month_day;
                month++;
            }
        }

        return make_pair(month, day);
    }
};
