class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=root->val;
        maxP(root,maxi);
        return maxi;
        
    }
    int maxP(TreeNode* node,int &maxi){
        if(node==NULL){
            return 0;

        }
        int left=maxP(node->left,maxi);
        int right=maxP(node->right,maxi);
        int leftGain=max(left,0);
        int rightGain=max(right,0);
        maxi=max(maxi,leftGain+rightGain+node->val);
        
        return node->val+max(leftGain,rightGain);
    }
};