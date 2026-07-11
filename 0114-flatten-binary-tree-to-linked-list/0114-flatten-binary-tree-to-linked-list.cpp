class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* cur = root;

        while (cur != nullptr) {
            if (cur->left != nullptr) {
                // Step 1: left subtree ka rightmost node dhoondo (predecessor)
                TreeNode* pre = cur->left;
                while (pre->right != nullptr) {
                    pre = pre->right;
                }

                // Step 2: predecessor ka right, current ke old right se jodo
                pre->right = cur->right;

                // Step 3: left subtree ko right mein shift karo
                cur->right = cur->left;

                // Step 4: left ko null karo
                cur->left = nullptr;
            }

            // Step 5: aage badho
            cur = cur->right;
        }
    }
};