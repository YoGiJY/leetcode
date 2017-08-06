/*************************************************************************
    > File Name: ReverseLink.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Thu Aug  3 21:54:17 2017
 ************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;
struct link{
    int num;
    link *next;
};

link * ReverseLink(link *L){
    if(L == NULL) return NULL;
    if(L->next==NULL) return  NULL;
    link *p;
    link *q;
    link *head = L;
    p = L;
    p = p->next->next;
    head->next = NULL;
    while(p!=NULL){
        q = p;
        q->next = head->next;
        head = q;
        p = p->next;
    }
    return head;
}

int main(){
    link * L;
    link *q;
    link *p;
    int n;

    cin >> n;
    q = (link *) malloc(sizeof(link));
    cin>>q->num;
    L->next = q;
    p = q;
    for(int i = 1;i<n;++i){
        q = (link *) malloc(sizeof(link));
        cin>>q->num;
        p->next = q;
        q = p;
    }
    q->next = NULL;
    link * L1 = ReverseLink(L);
    p = L1->next;
    while(p!=NULL){
        cout << p->num;
        p = p->next;
    }
}
