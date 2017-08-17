/*************************************************************************
    > File Name: inorder.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Wed Aug  9 22:32:27 2017
 ************************************************************************/

//这里使用非递归的方实现，中序遍历，左-->中-->右
//这里使用的方式是栈stack
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

vector<int> InOder(TreeNode *root){
    vector<int> data;
    if(root == NULL) return data;
    stack<TreeNode *> sta;
    TreeNode *p;
    TreeNode *q;
    sta.push(root);
    p = root;
    //这里处理的方式，先不断遍历左子树，知道最后一个左子树，然后再判断右子数
    while(!sta.empty())
    {
        if(p!=NULL)
        {
            sta.push(p);
            p = p->left;
        }
        else
        {
            q = sta.top();
            sta.pop();
            data.push_back(q->val);
            p = q->right;
        }
    }
    return data;
}
