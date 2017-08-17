/*************************************************************************
    > File Name: minimum-depth-of-binary-tree.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug 13 11:02:43 2017
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
};

int run(TreeNode * root){
    if(root == NULL) return 0;
    if(root->left == NULL) return run(root->right) + 1;
    if(root->right == NULL) return run(root->left) + 1;
    return min(run(root->left),run(root->right)) + 1;
}
