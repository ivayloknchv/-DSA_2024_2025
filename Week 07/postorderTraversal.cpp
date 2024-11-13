/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution {
public:

    void traversalHelper(TreeNode* curr, vector<int>& vec)
    {
        if(!curr)
        {
            return;
        }

        traversalHelper(curr->left, vec);
        traversalHelper(curr->right, vec);
        vec.push_back(curr->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> res;

        traversalHelper(root, res);

        return res;
    }
};
