class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;

        if (root == NULL) {
            return res;
        }

        exec_postorder(root, res);
        return res;
    }

    void exec_postorder(TreeNode* root, vector<int>& res) {
        if (root->left != NULL) exec_postorder(root->left, res);
        if (root->right != NULL) exec_postorder(root->right, res);
        res.push_back(root->val);
    }
};
