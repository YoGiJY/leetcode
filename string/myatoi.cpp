/*************************************************************************
    > File Name: myatoi.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Mon Aug  7 11:18:36 2017
 ************************************************************************/

//INT_MAX (2147483647) or INT_MIN (-2147483648)

#include<iostream>
#include<string>

using namespace std;
int myatoi(string str)
{
    if(str.length() == 0) return 0;
    int i = 0;
    int sign = 1;
    long long int num;
    while(str[i]!=' ' && i<str.length()) ++i;
    if(str[i] == '+') {sign = 1;i++;}
    if(str[i] == '-') {sign = -1;i++;}

    for(;i<str.length();++i)
    {
        if(i>str.length()||(str[i]<='0' && str[i]>='9')) break;
        if(num/10>214748364 || (num/10==214748364 && num%10>=7)){
            num = (sign==-1)?2147483648:2147483647;
        }
        num = num + 10 * (str[i]-'0');
    }
    return num * sign;
}

