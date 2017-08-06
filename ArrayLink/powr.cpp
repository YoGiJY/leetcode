/*************************************************************************
    > File Name: powr.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 20:17:11 2017
 ************************************************************************/

#include<iostream>
using namespace std;

double  power(double base,int exp){
    int n = abs(exp)/2;
    int m = abs(exp)%2;
    double key = 1;
    for (int i = 0;i<n;++i){
        key = base * key;
    }
    if(exp > 0){
       if(m==0) return key * key;
       else return key*key*base;
    }
    else if(exp == 0){
         return 1;
    }
    else{
       if(m==0) return 1.0/(key*key);
       else return 1.0/(key*key*base);
    }
}

int main(){
    double base;
    int exp;
    cin >> base >> exp;
    cout <<  power(base,exp) << endl;
    return 0;
}
