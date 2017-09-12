/*************************************************************************
	> File Name: 1.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Sat Sep  9 14:47:52 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

int flag[101] = {0};
int BFS(vector<int> data, int m)
{
    flag[0] = 1;
    int sum = 1; // 表示第一个节点已经访问
    int te;
    int ce = 1;
    queue<int> que;
    queue<int> que0;
    que.push(data[0]+1);
    que0.push(data[0]+1);
    while(!que.empty())
    {
        queue<int> que1;
        que.swap(que1);
        while(!que0.empty())
        {
            te = que0.front();
            que0.pop();
            for(int i = 0; i < data.size(); ++ i)
            {
                if(data[i] == te)
                {
                    if(flag[i+1] == 0)
                    {
                        que.push(i+1);
                        sum ++ ;
                        flag[i+1] = 1;
                    }
                }
            }
        } 
        que0.swap(que);
        ce++;
        if(ce == m ) break;
    }
    if(ce == m) return sum;
    else return data.size();
}

int main(){
    int n;
    int m;
    vector<int> data;
    cin >> n >> m;
    for(int i = 0;i < n-1; ++i)
    {
        int temp;
        cin >> temp;
        data.push_back(temp);
    }
    cout << BFS(data, m) + 1 << endl;
    return 0;
}
