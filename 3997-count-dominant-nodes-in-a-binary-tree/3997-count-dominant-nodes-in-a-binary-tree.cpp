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
    int count = 0;
    int dfs(TreeNode* node){
        if(!node) return INT_MIN;

        int leftmax = dfs(node->left);
        int rightmax = dfs(node->right);
        int subtreemax = max({node->val,leftmax,rightmax});
        if(node -> val == subtreemax) count++;
        return subtreemax;
    }
    int countDominantNodes(TreeNode* root) {
        count = 0;
        dfs(root);
        return count;
    }
};