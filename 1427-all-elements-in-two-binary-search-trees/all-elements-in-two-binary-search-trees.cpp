class Solution {
private:
    void inorder(TreeNode* root, vector<int>& elements) {
        if (!root) return;
        inorder(root->left, elements);
        elements.push_back(root->val);
        inorder(root->right, elements);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> list1, list2;
        inorder(root1, list1);
        inorder(root2, list2);
        vector<int> mergedResult;
        mergedResult.reserve(list1.size() + list2.size());
        int i = 0, j = 0;
        while (i < list1.size() && j < list2.size()) {
            if (list1[i] < list2[j]) {
                mergedResult.push_back(list1[i]);
                i++;
            } else {
                mergedResult.push_back(list2[j]);
                j++;
            }
        }
        while (i < list1.size()) {
            mergedResult.push_back(list1[i]);
            i++;
        }
        while (j < list2.size()) {
            mergedResult.push_back(list2[j]);
            j++;
        }
        return mergedResult;
    }
};