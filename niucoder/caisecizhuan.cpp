/*************************************************************************
    > File Name: caisecizhuan.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Thu Aug 17 22:39:08 2017
 ************************************************************************/

#include<iostream>
using namespace std;

//连续的两个相等需要换掉一个
//2 1
//3 1
//4 2
//5 2
//6 3
//由题分析得到,最长是两个连续相等，分别cur记录子问题的连续相等的情况然后通过子问题得到补充替换的个数

int main(){
    string str;
    cin >> str;
    int cur = 0;
    int res = 0;
    for(int i = 0;i < str.length()-1;++i){
        if(str[i]!=str[i+1]){
            res = res + (cur+1) / 2;
            cur = 0;
        }else
        {
            cur ++;
        }
    }
    res = res + (cur+1) /2;
    cout << res <<endl;
    return 0;
}
