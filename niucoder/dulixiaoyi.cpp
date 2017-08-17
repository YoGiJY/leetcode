/*************************************************************************
    > File Name: dulixiaoyi.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Thu Aug 17 21:43:19 2017
 ************************************************************************/

#include<iostream>
using namespace std;

//独立的小易
//n*x + m*p <= d
//n ~ m+f 约接近越好
//d-w*f
int main()
{
    int x;
    int f;
    int d;
    int p;
    int temp;
    cin >> x >> f >> d >> p;
    temp = d - f * x;
    int day = 0;
    if(temp <= 0 )
    {
        day = d / x;
    }

    if(temp > 0){
        temp = temp / (x + p);
        day = f + temp;
    }
    cout << day <<endl;
    return 0;
}
