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
class Solution {
public:
    int cnt=0,m=0;
    void inorder(TreeNode* root,int cnt)
    {
        if(root)
        {
            cnt++;
            inorder(root->left,cnt);
            m=max(m,cnt);
            inorder(root->right,cnt);
        }
    }
    int maxDepth(TreeNode* root) {
        inorder(root,cnt);
        return m;
    }
};