#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int totalSum = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        totalSum = targetSum;
        return DFS(root, 0);
    }

    bool DFS(TreeNode* root, int sum){
        if(!root->left && !root->right){
            if(sum + root->val == totalSum)
                return true;
            return false;
        }

        if(root->left){
            if(DFS(root->left, sum + root->val))
                return true;
        }

        if(root->right){
            if(DFS(root->right, sum + root->val))
                return true;
        }

        return false;
    }
};