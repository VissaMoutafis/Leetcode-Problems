/* Problem:
Given two binary trees and imagine that when you put one of them to cover the other, 
some nodes of the two trees are overlapped while the others are not.

You need to merge them into a new binary tree. 
The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. 
Otherwise, the NOT null node will be used as the node of new tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static TreeNode* recMerge(TreeNode *t1, TreeNode *t2)
{
    if(t2 == NULL) return t1;
    else if(t1 == NULL) return t2;
    
    TreeNode *root = new TreeNode{t1->val+t2->val};
    root->left = recMerge(t1->left, t2->left);
    root->right = recMerge(t1->right, t2->right);
    
    return root;
}
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode *root = NULL;
        if(t1 == NULL) return t2;
        else if(t2 == NULL) return t1;
    
        root = recMerge(t1 ,t2);
        return root;
    }
};
