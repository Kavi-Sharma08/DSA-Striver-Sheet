#include<vector>
#include "tree.h"

TreeNode* buildTree(vector<int>& preorder, int& ind) {
    ind++;
    if (preorder[ind] == -1) {
        return nullptr;
    }
    TreeNode* root = new TreeNode(preorder[ind]);

    root->left  = buildTree(preorder, ind);
    root->right = buildTree(preorder, ind);

    return root;
}