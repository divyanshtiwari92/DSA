/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
  TreeNode*ArrToBst(vector<int> &n, int s ,int e){
    if(s>e){
        return NULL;
    }
    int mid = ( s + e )/2;
    TreeNode* root = new TreeNode(n[mid]);
    root->left = ArrToBst(n,s,mid-1);
    root->right = ArrToBst(n,mid+1,e);
    return root;
  }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> n;
        while(head != NULL){
            n.push_back(head->val);
            head = head->next;
        }
        return ArrToBst(n, 0,n.size() -1);
    }
};