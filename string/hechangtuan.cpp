/*************************************************************************
    > File Name: hechangtuan.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Mon Aug  7 13:43:03 2017
 ************************************************************************/

//题意如下
//n个学生，数组中的值表示，每个学生的能力值的大小，现在需要计算，
//连续k个学生乘积最大，能力值范围有-50 ~ 50
//而且相邻的学生差值不超过d
//动态规划中使用fx(i,j)表示第i个节点开始连续j个节点最大的乘积
//得到如下方程：
//fx(i,j) = max{f(i,j-1),data[j]-data[i]<d && j<k && data[j]*f(i,j-1)}

#include<iostream>
#include<vector>
using namespace std;
const int maxnum = 100;

int hechangtuan(vector<int> &data, unsigned int k, int d){
    int num = data.size();
    if(num == 0) return 0;
    if( k>num ) return 0;
    int maxlen = 0;
    int temp = 0;
    int maxl[maxnum][maxnum] = {0};
    int minl[maxnum][maxnum] = {0};
    for(int i = 0;i<num;++i){
        maxl[i][0] = 1;
        minl[i][0] = 1;
    }
    for(int i = 0;i<num-k;++i)
    {
        for(int j = i+1;j<k+1;++j)
        {
            if(data[j]-data[i] < d)
            {
                temp = maxl[i][j-1];
                maxl[i][j] = max(maxl[i][j-1]*data[j],minl[i][j-1]*data[j]);
                minl[i][j] = min(minl[i][j-1]*data[j],temp*minl[i][j-1]);
            }
        } 
    }

    for(int i = 0;i<num;++i){
        maxlen = max(maxlen,maxl[i][k]);
    }
    return maxlen;
}


int main(){
    int a[] = {1,7,4,7};
    vector <int> data;
    data.assign(a,a+4);
    unsigned int k = 2;
    int d = 50;
    cout << hechangtuan(data,k,d) <<endl;
    return 0;
}
