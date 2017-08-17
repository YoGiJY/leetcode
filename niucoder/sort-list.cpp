/*************************************************************************
    > File Name: sort-list.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug 13 12:24:32 2017
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
};

//思路：
//如快速排序思想一样，以第一个数为参考点
//大于它的数据放在一个链表
//小于它的数据放在另一个链表
//最后合并成一个链表

class Solution {
    public:
    ListNode *sortList(ListNode *head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode *p = head,*q = head->next;
        while(q && q->next){
            p = p->next;
            q = q->next->next;
        }

        ListNode *left = sortList(p->next);
        p->next = NULL;
        ListNode *right = sortList(head);
        return merge(left,right);
    }

    ListNode * merge(ListNode *left, ListNode *right){
        ListNode dummy; 
        ListNode *p = &dummy;
        while(left && right){
            if(left->val > right->val)
            {
                p->next = right;
                right = right->next;
            }
            else{
                p->next = left;
                left = left->next;
            }
            p = p->next;
        }
        if(left) p->next = left;
        if(right) p->next = right;
        return dummy.next;
    }
 };
