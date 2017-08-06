/*************************************************************************
    > File Name: zuidazixuelie.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 21:46:01 2017
 ************************************************************************/

#include<iostream>
using namespace std;

const int maxnum = 100;
int a[] = {2,1,6,4,5,2,7,4};

int zuidazixuelie(int *data, int n){
    int s[maxnum] = {0};
    s[0] = 1;
    int max = 0;
    for(int i = 1;i<n;++i)
    {
        max = 0;
        for(int j = i-1;j>=0;--j)
        {
            if(data[i]>data[j])
            {
                if(max < s[j])
                {
                    max = s[j];
                }
            }
        }
        s[i] = max + 1;
    }
    max = 0;
    for(int i = 0;i<n;++i){
        if(max < s[i]){
            max = s[i];
        }
    }
    return max;
}

int main(){
    cout << zuidazixuelie(a,8);
}
