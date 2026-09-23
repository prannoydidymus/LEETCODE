class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        traverse(root,sum);
        return root;
    }
    void traverse(TreeNode* root,int& sum){
        if(!root)return;
        traverse(root->right,sum);
        sum += root->val;
        root->val = sum;
        traverse(root->left,sum);
    }
};