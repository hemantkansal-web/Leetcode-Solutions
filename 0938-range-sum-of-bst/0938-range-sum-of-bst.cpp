class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr){
            return 0;
        }
        if(low <= root->val && root->val <= high) {
            return root -> val + rangeSumBST(root -> left,low,high) + rangeSumBST(root -> right,low,high);
        } else if(root -> val < low){
            return rangeSumBST(root -> right,low,high); //if the value of left subtree is lower than low then we check the right subtree
        } else {
            return rangeSumBST(root -> left,low,high); //if the value of right subtree is lower than low then we check the left subtree
        }
    }
};