/*************************************************************************
    > File Name: linkoddeven.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 10:43:24 2017
 ************************************************************************/

#include<iostream>
using namespace std;

struct ListNode{
    int num;
    ListNode * next;
};

ListNode linkoddeven(ListNode * L){
    ListNode evenall;
    ListNode oddall;
    ListNode even;
    ListNode odd;
    ListNode *p;
    evenall = even;
    oddall = odd;

    while(L!=NULL){
        if(L->num%2 == 0){
            even.next = L;
            even.next = &even;
        }
        else{
            odd.next = L;
            odd.next = &odd;
        }
        L=L->next;
    }
    odd.next = NULL;
    even.next = &oddall;
    return even;
}
