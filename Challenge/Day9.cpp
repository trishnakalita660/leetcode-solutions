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
        
        int Ans(TreeNode* root, int minm, int maxm)
        {
                if(!root) { return maxm-minm; }
                
                minm = min( minm, root->val);
                maxm= max(maxm, root->val);
                
                int left = Ans(root->left, minm, maxm);
                int right = Ans( root->right, minm, maxm);
                
                return max(left,right);
                
                
        }
        
        
    int maxAncestorDiff(TreeNode* root) {
        return Ans(root, root->val, root->val);
    }
}; 