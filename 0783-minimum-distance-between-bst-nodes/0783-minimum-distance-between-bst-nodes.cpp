class Solution {
public:
    int miniDiff = INT_MAX;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root){
        if(root == nullptr) return;
        inorder(root -> left);

        if(prev != nullptr){
            miniDiff = min(miniDiff,root -> val - prev -> val);
        }
        prev = root;
        inorder(root -> right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return miniDiff;
    }
};