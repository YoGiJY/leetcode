/*************************************************************************
    > File Name: LastRemaining.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 09:21:50 2017
 ************************************************************************/

#include<iostream>
using namespace std;
const int maxnum  =1000;

int LastRemaining(int n, int m){
    int s[maxnum] = {0};
    for(int i = 0;i < n;++i){
        s[i] = i+1;
    }
    s[n-1] = 0;
    int k = n;
    int ko = 0;
    int x = 0;
    int temp = 0;
    int index = 0;
    while (1){
        x = 0;
        while(x != m){
            x++ ;
            temp = ko;
            index = s[ko];
            ko = index;
        }
        if(x == m){
            s[temp] = s[ko];
            ko = s[ko];
            x = 0;
            k--;
        }
        if(k==0){
            return ko;
        }
    }
    return 0;
}

int main(){
    cout << LastRemaining(2,2) << endl;
    return 0;
}
