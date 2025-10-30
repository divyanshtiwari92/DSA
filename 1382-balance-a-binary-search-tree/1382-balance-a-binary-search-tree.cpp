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
   void inorder(TreeNode* root, vector<int>& a) {  // pass by reference
        if (root == NULL) {
            return;
        }
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    TreeNode* bstConvert(int s, int e,   vector<int> &inorderval){
        if(s>e){
            return NULL;
        }
        int m = (s+e)/2;
         TreeNode* root = new  TreeNode(inorderval[m]);
         root->left = bstConvert(s,m-1,inorderval);
  root->right = bstConvert(m+1,e,inorderval);
  return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
         vector<int> inorderval;
        inorder(root, inorderval); 
return bstConvert(0,inorderval.size() -1,inorderval);
    }
};