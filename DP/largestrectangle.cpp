/*************************************************************************
    > File Name: largestrectangle.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 21:25:26 2017
 ************************************************************************/
//这里求解最大面积，使用队列的方式计算
//当i<j且data[i] < data[j],出队列,进行计算,其中队列的长度就是L，顾这里计算data[i]*L
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestrectangle(vector<int> &data){
    int maxsqure = 0;
    stack<int> stk;
    int i = 0;
    while(i < data.size()){
        if(stk.empty() || data[stk.top()] <= data[i]){
            stk.push(i++);
        }else{
            int t = stk.top();
            stk.pop();
            maxsqure = max(maxsqure,data[t]*(stk.empty()?i:i-stk.top()-1));
        }
    }
    return maxsqure;
}


int main(){
    int a[] = {2,1,5,6,6,2,3};
    vector<int> data;
    data.assign(a,a+7);
    cout << largestrectangle(data)<<endl;
    return 0;
}
