class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int result=height(root);
        return result!=-1;

    }
    int height(TreeNode* node){
        if(node==NULL){
            return 0;

        }
        int left=height(node->left);
        if(left==-1){
            return -1;
        }
        int right=height(node->right);
        if(right==-1){
            return -1;
        }
        if(abs(left-right)>1){
            return -1;
        }
        return 1+max(left,right);
    }
};