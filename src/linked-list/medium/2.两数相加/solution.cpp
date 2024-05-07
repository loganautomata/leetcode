/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */
#include "header.hpp"

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *res = NULL;
        int cin = 0;

        for (ListNode *node1 = l1, *node2 = l2, *nodes = res; node1 != NULL || node2 != NULL;) {
            int sum = 0;
            ListNode *ln = new ListNode;

            if (node1) sum += node1->val;
            if (node2) sum += node2->val;
            sum += cin;

            ln->val = sum % 10;
            cin = sum / 10;
            if (nodes) {
                nodes->next = ln;
            } else {
                res = ln;
            }
            if (node1) node1 = node1->next;
            if (node2) node2 = node2->next;
            nodes = ln;

            if (!node1 && !node2 && cin) {
                ListNode *last_ln = new ListNode(1);
                nodes->next = last_ln;
            }
        }

        return res;
    }
};
// @lc code=end
