/*************************************************************************
    > File Name: heapSort.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Mon Aug  7 20:20:54 2017
 ************************************************************************/
//
//int a[] = {3,1,4,2,5,9,7,0}
#include<iostream>
using namespace std;

//堆排序的特点是，每一次建立堆都会产生一个最大值，这是(大根堆)
//第二次建立堆的时候，将产生的最大值去除

int CreateHeap(int *data,int n)
{
    int temp;

    for(int i = n/2;i > 0; --i)
    {
        if(2*i+1 <= n && data[2*i + 1] > data[i])
        {
            temp = data[2*i+1];
            data[2*i+1] = data[i];
            data[i] = temp;
        }

        if( 2*i <= n && data[2*i] > data[i])
        {
            temp = data[2*i];
            data[2*i] = data[i];
            data[i] = temp;
        }
    }
    return 0;
}

void heapSort(int *data,int n)
{
    int temp;
    int a[100];
    int k = 0;
    for(int i = n; i > 0; i--)
    {
        CreateHeap(data,i);
        temp = data[1];
        data[1] = data[i];
        data[i] = temp;
    }
}

int main()
{
    int a[] = {0,3,1,11,4,2,5,10,9,7,0};
    heapSort(a,10);
    for(int i = 1;i <= 10 ;++i)
    {
        cout << a[i] <<endl;
    }
    return 0;
}
