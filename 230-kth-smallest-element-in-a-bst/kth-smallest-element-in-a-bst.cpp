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
    void getInorderTrav(TreeNode* root, vector<int>& inOrder){
        if(root == NULL) return;
        getInorderTrav(root->left,inOrder);
        inOrder.push_back(root->val);
        getInorderTrav(root->right,inOrder);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inOrder;
        getInorderTrav(root,inOrder);
        return inOrder[k-1];
    }
};