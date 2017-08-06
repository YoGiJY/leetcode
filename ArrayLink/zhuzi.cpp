/*************************************************************************
    > File Name: zhuzi.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 23:16:44 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int data[] = {3,5,4,2,5};

int zhuzi(int *data,int n){
    int total = 0;
    int left = 0;
    int max = 0;
    int right = n-1;
    while(left < right){
        if(data[left] < data[right]){
            total = data[left] * (right - left -1);
            left ++ ;
        }else{
            total = data[right] * (right - left -1);
            right --;
        }
        if (max < total){
            max = total;
        }
    }
    return max;
}

int main(){
    cout << zhuzi(data,5)<<endl;
    return 0;
} 
