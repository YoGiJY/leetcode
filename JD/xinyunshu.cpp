/*************************************************************************
	> File Name: jingzhijunzhi.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Sat Sep  9 12:01:06 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int panduan(int k, int m)
{
    int temp;
    int sum = 0;
    int n;
    n = m;
    while(n)
    {
        temp = n % k;
        n = n / k;
        sum += temp;
    }
    return sum;
}


int main(){
    int m;
    cin >> m;
    int cur = 0;
    for(int i = 1; i <= m; ++ i){
        int a = panduan(2,i);
        int b = panduan(10,i);
        if(a == b)
             cur ++ ;
    }
    cout << cur << endl;
    return 0;
}
