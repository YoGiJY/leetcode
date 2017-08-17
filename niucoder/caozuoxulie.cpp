/*************************************************************************
 > File Name: caozuoxulie.cpp
 > Author:yao jiang
 > Mail: yao.jiang@tongji.edu.cn
 > Created Time: Thu Aug 17 21:13:26 2017
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
//如分析所得，奇数位置和偶数位置部分的值是分成两边的
//顾分两部分解决这个问题

int main(){
    int n;
    cin >> n;
    vector<int> data;
    for(int i = 0;i<n ;++i)
    {
        int temp;
        cin >> temp;
        data.push_back(temp);
    }
    
    int k = 0;
    if(n%2==1)
    {
        for(int i = n-1;i>=0;){
            cout << data[i] << " ";
            i = i - 2;
        }
        for(int i=1;i< n-2;){
            cout << data[i]<<" ";
            i = i + 2;
        }
        cout << data[n-2] << endl;
    }
    
    if(n%2 == 0)
    {
        for(int i = n-1;i > 0;){
            cout << data[i] << " ";
            i = i-2;
        }
        for(int i = 0;i < n-2;){
            cout << data[i]<< " ";
            i = i + 2;
        }
        cout << data[n-2] << endl;
    }
    
}

