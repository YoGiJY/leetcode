/*************************************************************************
    > File Name: maximumproductsub.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 18:43:23 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//product计算的时候需要考虑的是最小值的计算，跟踪最小值
//最大数和最小数之间转化

int maximumproductsub(vector<int> &data){
    int maxproduct = 0;
    int minlocal = min(data[0],data[1]);
    int maxlocal = max(data[0],data[1]);
    for(int i = 2;i<data.size();++i)
    {
        int temp = maxlocal;
        maxlocal = max(maxlocal*data[i],minlocal*data[i]);
        minlocal = min(data[i]*temp,data[i]*minlocal);
        maxproduct = max(maxproduct,maxlocal);
    }
    return maxproduct;
}

int main()
{
    vector<int> data;
    int a[] = {-1,-2,2,3,-2,4};
    data.assign(a,a+6);
    cout << maximumproductsub(data) <<endl;
    return 0;
}
