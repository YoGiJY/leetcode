/*************************************************************************
	> File Name: jingzhijunzhi.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Sat Sep  9 12:01:06 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int sum = 0;
int m;

void panduan(int k)
{
    int temp;
    int n;
    n = m;
    while(n)
    {
        temp = n % k;
        n = n / k;
        sum += temp;
    }
}

int measure(int x, int y)
{
    int z = y;
    while(x%y!=0)
    {
        z = x%y;
        x = y;
        y = z;    
    }
    return z;
}

int main(){
    cin >> m;
    for(int i = 2; i < m; ++i){
        panduan(i);
    }
    int a = measure(sum, m-2);
    cout << sum / a << "/" << (m-2) / a <<endl;
    return 0;
}
