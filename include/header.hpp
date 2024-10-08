/*
 * @file: include/header.hpp
 * @breif: leetcode题目调试需要的头文件引入和数据结构
 * @date: 05/03/2024 17:00
 * @author: logan
 * @copyright: www.logan.ren
 */

#pragma once

#include <algorithm>
#include <cstddef>
#include <vector>
#include <string>
#include <iterator>
#include <regex>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <sstream>

using namespace std;

// 单向链表
// 定义
struct ListNode {
    int val;
    ListNode *next;
    ListNode() :
        val(0), next(nullptr) {
    }
    ListNode(int x) :
        val(x), next(nullptr) {
    }
    ListNode(int x, ListNode *next) :
        val(x), next(next) {
    }
};

// 生成单向链表
static ListNode *GenList(vector<int> arr) {
    ListNode *head = NULL;
    ListNode *node = NULL;

    for (size_t i = 0; i < arr.size(); i++) {
        ListNode *ln = new ListNode(arr[i]);

        if (!node) {
            head = ln;
        } else {
            node->next = ln;
        }

        node = ln;
    }

    return head;
}

// 二叉树
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() :
        val(0), left(nullptr), right(nullptr) {
    }
    TreeNode(int x) :
        val(x), left(nullptr), right(nullptr) {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) :
        val(x), left(left), right(right) {
    }
};
