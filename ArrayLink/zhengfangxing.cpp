/*************************************************************************
    > File Name: zhengfangxing.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 19:55:25 2017
 ************************************************************************/

#include<iostream>
using namespace std;

long long int zhengfangxing(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    long long int An = 1;
    long long int Ann = 2;
    long long int A = 0;
    for (int i=3;i<=n;++i){
        A = An + Ann;
        An = Ann;
        Ann = A;
    }
    return A;
}

int main(){
    int n;
    cin >> n;
    cout << zhengfangxing(n)<<endl;
    return 0;
}
