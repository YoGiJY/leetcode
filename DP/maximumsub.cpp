/*************************************************************************
    > File Name: maximumsub.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 18:31:28 2017
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int maximumsub(vector<int> &data){
    int n = data.size();
    int maxsub = 0;
    int total = 0;
    for(int i = 0; i < n; ++i){
        total = total + data[i];
        maxsub = max(maxsub,total);
        if(total < 0){
            total = 0;
        }
    }
    return maxsub;
}

int main(){
    int a[]={100,-1,-3,-4,-1,-2,-1,-1,-4};
    vector <int> data;
    data.assign(a,a+9);
    cout << maximumsub(data)<<endl;
    return 0;
}
