/*************************************************************************
	> File Name: fengkuang.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Fri Sep  8 19:32:18 2017
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long temp = sqrt(n);
    long long k1;
    long long k2;
    long long k3;
    while(1)
    {
        k1 = (temp-2) * (temp - 1)/2;
        k3 = (temp * temp - temp)/2;
        if(n >= k1 && n <= k3){
            break;
        }
        temp = temp + 1;
    }
    
    cout << temp-1 << endl;
    return 0;
}
