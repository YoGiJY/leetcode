/*************************************************************************
    > File Name: oddeven.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 20:36:35 2017
 ************************************************************************/

#include<iostream>
using namespace std;
const int maxnum = 1000;
int *OddEven(int *data, int n){
    int odd[maxnum];
    int even[maxnum];
    if (data == NULL) return NULL;
    if(n <= 0) return NULL;
    int ok = 0;
    int ek = 0;
    for(int i = 0;i<n;++i){
        if (data[i]%2!=0){
            odd[ok++] = data[i];
        }
        else {
            even[ek++] = data[i];
        }
    }
    for(int i = 0;i<ok;++i){
        data[i] = odd[i];
    }
    for(int i = ok;i<n;++i){
        data[i] = even[i-ok];
    }
    return data;
}

int main(){
    int data[] = {1,2,3,4,5,6,7,8,9,0};
    int n = 10;
    int * key = OddEven(data,n);
    for(int i = 0; i< n;++i){
        cout << key[i] << " ";
    }
    return 0;
}
