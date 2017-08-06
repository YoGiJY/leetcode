/*************************************************************************
    > File Name: jumpganmeII-2.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 20:08:31 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int jump(int *A,int n){
    int pre[100];
    int reach = 0;
    for(int i = 0;i<n;++i){
        if(i+A[i] > reach){
            for(int j = reach + 1;j <= i+ A[i] && j<n;j++){
                pre[j] = i;
            }
            reach = i + A[i];
        }
    int ans = 0;
    int k = n - 1;
    while(k > 0){
        k = pre[k];
        ans ++ ;
    }
    return ans;
    }
    return 0;
}

