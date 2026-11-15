class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       
       return check(root,p,q);
        
        
    }
     TreeNode* check(TreeNode* root,TreeNode* p,TreeNode* q){
            if(root==NULL) return NULL;
            if(root==p|| root==q){
                return root;
            }
            TreeNode* left=check(root->left,p,q);
            TreeNode* right=check(root->right,p,q);

            if(left!=NULL && right!=NULL){
                return root;
            }
            if(left!=NULL){
                return left;
            }
            else{
                return right;
            }
        }
};