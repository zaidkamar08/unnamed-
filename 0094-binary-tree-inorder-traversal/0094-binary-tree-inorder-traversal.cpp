class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int>ans;
    Inorder(root,ans);
    return ans;    
    }
    void Inorder(TreeNode* node,vector<int>&ans){
        if(node==NULL){
            return;
        }
        Inorder(node->left,ans);
        ans.push_back(node->val);
        Inorder(node->right,ans);
    }
};