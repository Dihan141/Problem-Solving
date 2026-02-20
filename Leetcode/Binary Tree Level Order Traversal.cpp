#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        queue<pair<TreeNode *, int>> q;

        if (root)
            q.push({root, 0});

        while (!q.empty())
        {
            TreeNode *curr = q.front().first;
            int level = q.front().second;
            q.pop();

            if (level == ans.size())
                ans.push_back(vector<int>());

            ans[level].push_back(curr->val);

            if (curr->left)
                q.push({curr->left, level + 1});

            if (curr->right)
                q.push({curr->right, level + 1});
        }

        return ans;
    }
};
;