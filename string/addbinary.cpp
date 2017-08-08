/*************************************************************************
    > File Name: addbinary.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Mon Aug  7 13:01:31 2017
 ************************************************************************/

#include<iostream>
using namespace std;
string addBinary(string a, string b) {
    if(a == null || a.length() == 0) {
       return b;               
    }
    if(b == null || b.length() == 0) {
       return a;
    }
    int pa = a.length()-1;
    int pb = b.length()-1;
    int flag = 0;
    StringBuilder sb = new StringBuilder();
    while(pa >= 0 || pb >= 0) {
        int va = 0, vb=0;
        if(pa >= 0){
            va = a.charAt(pa) - '0';
            pa--;
        }
        if(pb >= 0){
            vb = b.charAt(pb) - '0';
            pb--;
        }
        int sum = va + vb + flag;
        if(sum >= 2){
            sb.append(String.valueOf(sum-2));
            flag = 1;
        }else {
            flag = 0;
            sb.append(String.valueOf(sum));
        }
    }
    if(flag == 1){
        sb.append('1');
    }
    return sb.reverse().toString();
}
