class Solution {
public:
    TreeNode* prev = nullptr; //track the last visited node
    int count = 0;
    int maxcount = 0;
    vector<int> result;

    void inorder(TreeNode* node){
        if(!node) return;

        inorder(node -> left);
        if(prev && prev -> val == node -> val){
            count++;
        } else {
            count = 1;
        }

        if(count > maxcount){
         maxcount = count;
            result.clear();
            result.push_back(node -> val);
        } else if(count == maxcount) {
            result.push_back(node -> val);
        }
        prev = node;
        inorder(node -> right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return result;
    }
};