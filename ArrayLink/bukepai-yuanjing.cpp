/*************************************************************************
    > File Name: bukepai-yuanjing.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 20:24:27 2017
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool panduan(char *str){
    int n = strlen(str);
    if(n==1){
        if(str[0]>'3' && str[0]<'9') return true;
        if(str[0]=='A'||str[0]=='J'||str[0]=='K') return true;
    }
    if(n==2){
        if(str[0]=='1' && str[1]=='0') return true;
    }
    if(n==5){
        if(!strcmp(str,"joker") || !strcmp(str,"JOKER")) return true;
    }
    return false;
}

int  comparestr(char *str1,char *str2,int num){
    if(num == 0){
        if(!strcmp(str1,str2)) return 0;
        if(str1[0]=='2') return 1;
        if(str1[0]<str2[0]) return 2;
        else if(str1[0] > str2[0]) return 1;
    }

    if(num == 1){
        if(strlen(str1)==2){
            if(str2[0]==2 || str2[0]=='A'||str2[0]=='J'||str2[0]=='Q'||str2[0]=='K') return 2;
        }
        if(strlen(str2)==2){
            if(str1[0]==2 || str1[0]=='A'||str1[0]=='J'||str1[0]=='Q'||str1[0]=='K') return 1;
        }
    }
    
    if(num == 3){
        if(strlen(str1)>2 && strlen(str2)<3) return 1;
        if(strlen(str1)<3 && strlen(str1)>2) return 2;
        if(strlen(str1)>3 && strlen(str2)>3) {
            if(str1[0]>str2[0]) return 1;
            else return 2;
        }
    }
    return -1;
}

char *bukepai(char **str1, int n,char **str2,int m){
    int temp = 0;
    int temp1 = 0;
    int num = 0;
    if(n==m)
    {
       if(n==1)
        {
            temp = strlen(str1[0]);
            temp1 = strlen(str2[0]);
            if(panduan(str1[0]) || panduan(str2[0])) return "ERROR";
            if(temp==temp1 && temp < 3) num = 1;
            if(temp==temp1 && temp >3) num = 3;
            if(temp!=temp1 &&(temp ==2 || temp1==2 )) num =1;
            comparestr(str1[0],str2[0],num);
        }
        if(n==2)
        {
            if(strcmp(str1[0],str1[1]))  return "ERROR";
            if(strcmp(str2[0],str2[1]))  return "ERROR";
            temp = strlen(str1[0]);
            temp1 = strlen(str2[0]);
            if(panduan(str1[0]) || panduan(str2[0])) return "ERROR";
            if(temp==temp1 && temp < 3) num = 1;
            if(temp==temp1 && temp >3) num = 3;
            if(temp!=temp1 &&(temp ==2 || temp1==2 )) num =1;
            comparestr(str1[0],str2[0],num);
        }
        if(n==3)
        {
            
        }
    }
}

int main(){
    char data[100]={0};
    char str1[10][100] = {0};
    char str2[10][100] = {0};
    char str[10][100] = {0};

    cin.get(data,20);
    int k = 0;
    int l = 0;
    int temp = 0;
    for(int i = 0;i<strlen(data);++i)
    {
        if(data[i]!=' '&& data[i]!='-')
        {
            str1[k][l++] = data[i]; 
        }
        else if(data[i]==' ')
        {
            l = 0;
            k++;
        }
        if(data[i]=='-')
        {
            temp = i;
            break;
        }
    }
    int n = k;
    k = 0;
    l = 0;
    for(int i= temp+1;i<strlen(data);++i){
        if(data[i]!=' '&& data[i]!='\n'){
            str2[k][l++] = data[i]; 
        }
        else if(data[i]==' '){
            l = 0;
            k ++ ;
        }
        if(data[i]=='\n') {
            break;
        }
    }
    int m=k;
    cout << str1[0] << endl << str1 <<endl;
    return 0;
}
