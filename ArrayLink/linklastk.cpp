/*************************************************************************
    > File Name: linklastk.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 20:53:01 2017
 ************************************************************************/
#include<iostream>
using namespace std;


struct ListNode {
   int val;
   ListNode *next;
};


ListNode *linklast(ListNode * L, unsigned int k){
    ListNode *p;
    ListNode *q;
    ListNode *temp;
    p = L;
    int num = 1;
    while(p!=NULL){
        if(num == k) break;
        p = p->next;
    }
    if(num !=k) return NULL;
    q = L;
    while(p!=NULL){
        temp = q;
        p=p->next;
        q=q->next;
    }
    return q;
}
