class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL)
            return ans;

        map<int, vector<pair<int,int>>> mp;
        queue<pair<TreeNode*, pair<int,int>>> q;

        q.push({root, {0, 0}});

        while(!q.empty()) {
            auto p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int row = p.second.first;
            int col = p.second.second;

            mp[col].push_back({row, node->val});

            if(node->left != NULL)
                q.push({node->left, {row + 1, col - 1}});

            if(node->right != NULL)
                q.push({node->right, {row + 1, col + 1}});
        }

        for(auto &p : mp) {
            sort(p.second.begin(), p.second.end());

            vector<int> temp;

            for(auto x : p.second) {
                temp.push_back(x.second);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};