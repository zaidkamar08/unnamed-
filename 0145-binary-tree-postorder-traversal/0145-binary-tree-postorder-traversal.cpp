class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        PostOrder(root,ans);
        return ans;
        
    }

    void PostOrder(TreeNode* node,vector<int>&ans){
        if(node==NULL){
            return;
        }
        PostOrder(node->left,ans);
        PostOrder(node->right,ans);
        ans.push_back(node->val);
    }
};
