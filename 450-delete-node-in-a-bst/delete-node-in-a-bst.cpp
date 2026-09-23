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
public:
    TreeNode *findMin(TreeNode *node) {
        TreeNode *cur = node;
        while (node->left != NULL) {
            node = node->left;
        }

        return node;
    }

    TreeNode *helper(TreeNode *node, int key) {
        if (node == NULL) {
            return NULL;
        }

        if (key < node->val) {
            node->left = helper(node->left, key);
        } else if (key > node->val) {
            node->right = helper(node->right, key);
        } else {
            if (node->left == NULL && node->right == NULL) {
                return NULL;
            }

            if (node->left == NULL) {
                return node->right;
            }

            if (node->right == NULL) {
                return node->left;
            }

            auto minNode = findMin(node->right);
            node->val = minNode->val;

            node->right = helper(node->right, minNode->val);
        }

        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return helper(root, key);
    }
};