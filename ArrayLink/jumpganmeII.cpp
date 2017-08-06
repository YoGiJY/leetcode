/*************************************************************************
    > File Name: jumpganmeII.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 16:31:43 2017
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int jumpganmeII(vector <int> &data){
    int min = 0;
    int cur = data[0];
    int pre = 0;
    int res = 1;
    for(int i=0;i<cur;++i){
        if(i > pre){
            res++;
        }
        if(cur >= data.size()){
            return res;
        }
        if(cur < i+data[i]){
            pre = cur;
            cur = i+data[i]-1;
        }
    }
    return res;
}

int main(){
    vector <int> data;
    int a[] = {2,3,1,1,4};
    data.assign(a,a+5);
    cout << jumpganmeII(data)<<endl;
    return 0;
}
