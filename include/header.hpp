#pragma once

#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <unordered_map>

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

    for (int i = 0; i < arr.size(); i++) {
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
