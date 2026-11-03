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
    unordered_map<int,int>m;
    int k;
    TreeNode *TreeCons(vector<int>&pre, int l, int r){
        if(l>r){
            return NULL;

        }
        TreeNode *T= new TreeNode(pre[k]);
        int i=m[pre[k]];
        k++;
        T->left=TreeCons(pre,l,i-1);
        T->right=TreeCons(pre,i+1,r);

        return T;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++){
            m[inorder[i]]=i;
        }
         k=0;
          return TreeCons(preorder, 0, inorder.size() - 1);

    }
   
};