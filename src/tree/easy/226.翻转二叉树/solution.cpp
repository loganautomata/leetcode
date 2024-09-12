/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
 */
#include "header.hpp"

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void invert_dfs(TreeNode* root) {
        if (root == nullptr) return;

        invert_dfs(root->left);
        invert_dfs(root->right);
        swap(root->left, root->right);

        return;
    }

public:
    TreeNode* invertTree(TreeNode* root) {
        invert_dfs(root);
        return root;
    }
};
// @lc code=end

