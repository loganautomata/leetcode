/*
 * @file: include/output.hpp
 * @breif: leetcode调试需要的输出类
 * @date: 05/03/2024 17:01
 * @author: logan
 * @copyright: www.logan.ren
*/

#pragma once

#include <iostream>
#include "header.hpp"

class Output
{
private:
public:
    void PrintfArr(vector<int> array);
    void PrintfList(ListNode * list);
};
