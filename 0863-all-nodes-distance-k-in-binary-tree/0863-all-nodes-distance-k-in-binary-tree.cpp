class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        unordered_map<int, TreeNode*>parent;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i< size;i++){
                auto top = q.front();
                q.pop();

                if(top -> left){
                    parent[top -> left -> val] = top;
                    q.push(top -> left);
                }
                if(top -> right){
                    parent[top -> right -> val] = top;
                    q.push(top -> right);
                }
            }
        }
        unordered_map<int, int> visited;
        q.push(target); //start from the target node
        while(k-- && !q.empty()) { //runs until queue becomes empty
            int size1 = q.size();

            for(int i = 0;i < size1;i++){
                auto top = q.front();  //target becomes top
                q.pop(); //pop target node from the queue

                visited[top -> val] = 1;

                if(top -> left && !visited[top -> left -> val]) {
                    q.push(top -> left);
                }

                if(top -> right && !visited[top -> right -> val]) { 
                    q.push(top -> right); 
                    //checks if rightt element of top is not visited if not then push it into the queue
                    
                }
                if(parent[top -> val] && !visited [parent[top -> val] -> val]) {
                    q.push(parent[top -> val]);
                }
            }
        }

        while(!q.empty()) {
            ans.push_back(q.front() -> val);
            q.pop();
        }
        return ans;
    }
};