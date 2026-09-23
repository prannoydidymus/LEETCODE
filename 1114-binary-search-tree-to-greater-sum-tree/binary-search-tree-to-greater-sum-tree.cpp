class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        traverse(root, sum);
        return root;
    }

private:
    void traverse(TreeNode* node, int& sum) {
        if (!node) return;
        traverse(node->right, sum);  // visit greater keys first
        sum += node->val;            // accumulate
        node->val = sum;             // replace with running sum
        traverse(node->left, sum);
    }
};