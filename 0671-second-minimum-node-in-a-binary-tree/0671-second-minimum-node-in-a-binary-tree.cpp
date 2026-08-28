class Solution {
public:
    long long ans = LLONG_MAX;

    void solve(TreeNode* root,int minimum){
        if(root == NULL)
        return ;

        if(root -> val > minimum){
            ans = min(ans,(long long) root -> val);
        }
        solve(root -> left,minimum);
        solve(root -> right,minimum);
    }
    int findSecondMinimumValue(TreeNode* root) {
        int minimum = root -> val;
        solve(root,minimum);

        if(ans == LLONG_MAX){
            return -1;
        }
        return ans;
    }
};