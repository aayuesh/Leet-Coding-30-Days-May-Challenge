/*

    ##############################
    ## Author: AAYUESH BARUI #####
    ## College: LNMIIT ###########
    ##############################
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
    bool isCousins(TreeNode* root, int x, int y) {
        int h1=height(root,x,0);
        int h2=height(root,y,0);
       // cout<<h1<<" "<<h2<<endl;
        if(h1!=h2)
            return false;
        bool check=same(root,x,y);
       // cout<<check<<endl;
        return (!check);
    }
private:
    int height(TreeNode* node,int x,int h)
    {
        int cu=-1;
        if(node==NULL)
            return -1;
        if(node->val==x)
            return h;
        cu=max(cu,height(node->left,x,h+1));
        cu=max(cu,height(node->right,x,h+1));
        return cu;
    }
    bool same(TreeNode* node,int x,int y)
    {
        bool ans=false;
        if(node==NULL)
            return ans;
        if(node->left!=NULL && node->right!=NULL)
        {
            if(node->left->val==x && node->right->val==y)
                return true;
            if(node->left->val==y && node->right->val==x)
                return true;
        }
        ans=ans|same(node->left,x,y);
        ans=ans|same(node->right,x,y);
        return ans;
    }
};