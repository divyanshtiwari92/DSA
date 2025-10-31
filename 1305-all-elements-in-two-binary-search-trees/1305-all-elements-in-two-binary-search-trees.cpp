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
void inorder(TreeNode* root,vector<int>&a){
    if(root== NULL){
        return;
    }
    inorder(root->left , a);
    a.push_back(root->val);
    inorder(root->right,a);

}
 vector<int> mergearray( vector<int>a, vector<int>b){
    vector<int>ans(a.size() + b.size());
    int i = 0;
    int k = 0;
    int j = 0;
 while(i<a.size() && j<b.size()){
    if(a[i]<b[j]){
        ans[k++] = a[i];
        i++;
    }else{
         ans[k++] = b[j];  
         j++; 
    }
 }
 while(i<a.size()){
      ans[k++] = a[i];
        i++;
 }
  while(j<b.size()){
      ans[k++] = b[j];
        j++;
 }
 return ans;
 }
 
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>r1,r2;
        inorder(root1,r1);
        inorder(root2,r2);
        vector<int>merge = mergearray(r1,r2);
      return merge;
    }
};