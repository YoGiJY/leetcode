/*************************************************************************
    > File Name: zhushui.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 22:53:55 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int data[] = {0,1,0,2,1,0,1,3,2,1,2,1};

int zhushui(int *data,int n)
{
    int maxl = 0;
    int left = 0;
    int right = 0;
    int k = 0;
    int total = 0;
    for (int i = 0;i<n;++i){
        if(maxl < data[i]){
            maxl = data[i];
            k = i;
        }
    }

    for(int i = 0;i<k;++i){
        if(left < data[i]){
            left = data[i];
        }
        if(left - data[i]>0){
            total = total + left - data[i];
        }
    }

    for(int i = n-1;i>k;--i){
        if(right < data[i]){
            right = data[i];
        }
        if(right - data[i] > 0){
            total = total + right - data[i];
        }
    }
    return total;
}

int main(){
    cout << zhushui(data,12);
    return 0;
}
