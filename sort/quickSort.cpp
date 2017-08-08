/*************************************************************************
    > File Name: quickSort.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Mon Aug  7 19:54:38 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int quickSort(int *data,int left,int right){
    int key = data[left];
    int first = left;
    int last = right;
    while(left < right){
        while(left < right && key < data[right]) --right;
        data[left] = data[right];
        while(left < right && key > data[left]) ++left;
        data[right] = data[left];
    }
    data[left] = key;
    if(left > last) return 0;
    quickSort(data,first,left-1);
    quickSort(data,left+1,last);
    return 0;
}

int main(){
    int a[] = {3,1,4,2,5,9,7,0};
    quickSort(a,0,7); 
    for (int i = 0;i<8;++i)
        cout << a[i] <<endl;
    return 0;
}
