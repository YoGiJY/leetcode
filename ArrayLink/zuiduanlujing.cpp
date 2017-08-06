/*************************************************************************
    > File Name: zuiduanlujing.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Wed Aug  2 20:46:27 2017
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

//Dijkstra算法的实现的是单源节点到各节点的最短路径
//
//
//-1 10 -1 30 100
//10 -1 50 -1 -1
//-1 50 -1 20 10
//30 -1 20 -1 60
//100 -1 10 60 -1
//
//

int ZuiDuan(int data[5][5],int n, int begin, int end);

int ZuiDuan(int data[5][5], int n, int begin, int end)
{
    vector<int> Distance(n,0); //记录每次运算的权重
    vector<int> D(n,-1);        //起点begin到n的计算最短路径
    vector<bool> bianli(n,false);
    int v;
    int u;
    int mindistance;
    bianli[begin] = true;
    cout << "Hello World !" << endl;
    for(int i=0;i<n;++i)
    {
        Distance[i]=data[begin][i];
        D[i] = 0;
        if (data[begin][i] != -1)
        {
            mindistance = data[begin][i];
            v=i;
        }
    }

    //begin 点到各个点的最短路径
    for(int i=0;i<n;++i){
        if(i!=begin && Distance[i]!=-1 && mindistance > Distance[i])
        {
            mindistance = Distance[i];
            v = i;        
        }
    }

    D[v] = mindistance;
    bianli[v] = true;

    for (int i = 0; i<n; ++i)
    {
        if(bianli[i] == true) continue;
        for(int i=0;i<n;++i)
        {
            if(bianli[i]==false)
            {
                Distance[i] = data[v][i];
            }
        }

        mindistance = 0;
        for(int i=0;i<n;++i)
        {
            if(bianli[i]==false && Distance[i]!=-1 && mindistance > Distance[i])
            {
                mindistance = Distance[i];
                u = i;
            }
        }

        if(D[u]==-1)
        {
            D[u] = D[v] + mindistance;
        }
        
        if(D[u]!=-1 && D[u] > D[v] + mindistance)
        {
            D[u] = D[v] + mindistance;
        }
        if(u == end)
        {
            return bianli[u];
        }
        v = u;
        bianli[v] = true;
    }
    return 0;
}


int main()
{
    int data[5][5]={
        -1,10,-1,30,100,
        10,-1,50,-1,-1,
        -1,50,-1,20,10,
        30,-1,20,-1,60,
        100,-1,10,60,-1
    };

    cout << data[1][1] << endl;
    cout << ZuiDuan(data,5,1,3);
    return 0;
}


