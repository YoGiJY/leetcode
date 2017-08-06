/*************************************************************************
    > File Name: strStr.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 13:50:52 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int strStr(char *str1, char * str2){
    int n = strlen(str1);
    int m = strlen(str2);
    int num = 0;
    int j = 0;
    for(int i = 0;i<n-m+1;++i){
        int k = i;
        for( j = 0;j<m;++j){
            if(str1[k+j]!='\0' &&str1[k+j]!=str2[j]){
                break;
            }
        }
        if(j == m){
            num ++ ;
            j = 0;
        }
    }
    return num;
}

int main(){
    char str1[] = {'a','b','c','d','b','c','\0'};
    char str2[] = {'b','x','\0'};
    cout << strStr(str1,str2)<<endl;
}


