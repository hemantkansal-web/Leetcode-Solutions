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
      int runningSum = 0;
      void reverseInorder(TreeNode* root){
        if(!root) return;
      reverseInorder(root -> right); //first go to right

      runningSum += root -> val; //Sum Update
      root -> val = runningSum; //node update

      reverseInorder(root -> left); //then go to left
      }
    TreeNode* convertBST(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};