/*************************************************************************
    > File Name: sellstockII.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Mon Aug  7 10:24:36 2017
 ************************************************************************/

//该问题的实现是，在股票交易的基础上进行加强
//即最多可以进行2次交易
//那么如上述所讲，(0,i)和(i+1,n-1)这两个区间的
//使用动态规划的方法，f(i)表示(0,i)之间的最大利，并且使用一个数组保存下来

#include<iostream>
#include<vector>

using namespace std;

int sellstockII(vector<int> &data){
    vector<int> fx(data.size(),0);
    vector<int> gx(data.size(),0);
    int chazhi = 0;
    for(int i = 1;i<data.size();++i){
        chazhi = chazhi + data[i] - data[i-1];
        fx[i] = max(fx[i-1],chazhi);
        if(chazhi < 0){
            chazhi = 0;
        }
    }
    chazhi = 0;
    for(int i = data.size()-2;i>=0;--i){
        chazhi = chazhi + data[i+1]-data[i];
        gx[i] = max(gx[i+1],chazhi);
        if(chazhi < 0){
            chazhi = 0;
        }
    }

    chazhi = gx[0]+fx[0];
    for(int i = 1;i<data.size();++i){
        chazhi = max(chazhi,gx[i]+fx[i]);
    }
    return chazhi;
}

int main(){
    int a[] = {3,1,10,4,1,6,8,9,10};
    vector<int> data;
    data.assign(a,a+9);
    cout << sellstockII(data) <<endl;
    return 0;
}

