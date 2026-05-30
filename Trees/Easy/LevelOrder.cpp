#include<bits/stdc++.h>
#include"../tree.h"
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
    }
};

int main(){
    vector<int> preorder = {3, 9 ,-1 ,-1,20 , 15 , -1 , -1 ,7 ,-1 , -1};
    int ind  =  -1;
    TreeNode* root = buildTree(preorder , ind );
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

}