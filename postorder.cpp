/*************************************************************************
    > File Name: postorder.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Wed Aug  9 22:49:35 2017
 ************************************************************************/

//这里实现后序遍历非递归的方式，使用的数据结构是依然是栈
//后序遍历的特点是 左-->右-->中
//顾第一步是遍历查找最左的子树
//查找之后
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

vector<int> PostOrder(TreeNode *T){
    vector<int> data;
    if(T == NULL) return data;
    stack<TreeNode *> sta;
    TreeNode* p = T;
    while()
}
