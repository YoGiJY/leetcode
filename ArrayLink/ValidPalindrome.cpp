/*************************************************************************
    > File Name: ValidPalindrome.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 11:04:57 2017
 ************************************************************************/

#include<iostream>
using namespace std;

bool ValidPalindrome(char *data, int num){
    char str[100]={0};
    int k = 0;

    for(int i = 0;i<num;++i){
        if((data[i]>='a' && data[i]<'z')||(data[i]>'A'&&data[i]<'Z')){
            str[k] = data[i];
            k++;
        }
    }

    for(int i = 0; i<k/2;++i){
            if(str[i]!=str[k-i-1]) return false;
        }
    return true;
}

int main(){
    char a[]={'a','b','a','b'};
    cout <<ValidPalindrome(a,4)<<endl;
    return 0;
}
