class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        diameterH(root,diameter);
        return diameter;
        

    }
    int diameterH(TreeNode* node,int &diameter){
        if(node==NULL){
            return 0;
        }
        int left=diameterH(node->left,diameter);
        int right=diameterH(node->right,diameter);
        diameter=max(diameter,left+right);
        return 1+max(left,right);
    }
};