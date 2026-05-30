#pragma once
#include<vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        this->data = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

TreeNode* buildTree(vector<int>& preorder, int& ind);