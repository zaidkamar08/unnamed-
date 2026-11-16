class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 1});

        long long ans = 0;

        while (!q.empty()) {
            int n = q.size();

            long long first = q.front().second;
            long long last = first;

            for (int i = 0; i < n; i++) {
                auto curr = q.front();
                q.pop();

                last = curr.second;

                if (curr.first->left != NULL) {
                    q.push({curr.first->left,2 * (curr.second-first)});
                }

                if (curr.first->right != NULL) {
                    q.push({curr.first->right,2 * (curr.second-first)+1 });
                }
            }

            long long width = last - first + 1;
            ans = max(ans, width);
        }

        return ans;
    }
};