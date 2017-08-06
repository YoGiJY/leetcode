/*************************************************************************
    > File Name: kmp.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Tue Jul 11 21:38:56 2017
 ************************************************************************/

#include<iostream>
using namespace std;

//KMP 算法的实现:
    //第一步,计算next表，得到相应的回退次数
    //第二步,通过对应的next表获取相应的回退次数

const int maxnum = 100;

int *NextTable(char *data,int length)
{
    if (data==NULL) return NULL;
    if(length<=0) return NULL;
    int next[maxnum]={0};
    for(int i=0;i<length;++i){
        for(int t=i+1;t<length;++t)
        {
            if(data[i]!=data[t]){
                next[t]=t-1;：
            }
        }
    }
}
