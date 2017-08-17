/*************************************************************************
    > File Name: insertionSortList.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug 13 13:12:41 2017
 ************************************************************************/

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* insertionSortList(ListNode * head){
    if(head == NULL || head->next == NULL) return head;
    ListNode *p = head;
    ListNode *q = head->next;
    ListNode *p0,*q0;
    while(q!=NULL)
    {
        p = head;
        while(p!=q)
        {
            if(p->val > q->val)
            {
                if(p==head){
                    q->next = p;
                    head = q;
                    break;
                }
                q->next = p;
                p0->next = q;
                break;
            }
            p0 = p;
            p = p->next;
            if(p==q){
                break;
            }
        }
        q0 = q->next;
        q = q0;
        if(q0 == NULL) break;
    }
    return head;
}

int main(){
    int val;
    int n;
    cin >> n;
    ListNode *head;
    ListNode dummy(0);
    head = &dummy;
    for(int i = 0; i < n;++i)
    {
        ListNode *temp = new ListNode(0);
        cin >> val;
        temp->val = val;
        head->next = temp;
        head = head->next;
    }
    head->next = NULL;
    head = dummy.next;
    head = insertionSortList(head);
    while(head!=NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
    return 0;
}


