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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr){
            return nullptr;
        }
        //if the root value is equal to the target then return the rest tree
        if(root->val == val){
            return root;
        }
        //if the target is greater than the value of the current root then go to the right subtree
        else if(val > root->val ){
           return searchBST(root->right, val);
        }
        //if the target is less than the value of the current node then go to the left subtree
        else{
            return searchBST(root->left, val);
        }
        
    }
};