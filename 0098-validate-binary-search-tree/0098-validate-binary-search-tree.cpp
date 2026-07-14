class Solution {
    public:
    void inorder(TreeNode* node, vector<int>&arr){
        if(!node) return;
        inorder(node -> left,arr);
        arr.push_back(node -> val);
        inorder(node -> right,arr);
    }

    bool isValidBST(TreeNode* root){
        vector<int>arr;
        inorder(root,arr);
        for(int i = 1;i < arr.size();i++){
            if(arr[i] <= arr[i-1]) return false;
        }
         return true;
    }
};