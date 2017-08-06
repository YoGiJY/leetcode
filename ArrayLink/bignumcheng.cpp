/*************************************************************************
    > File Name: bignumcheng.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 10:50:16 2017
 ************************************************************************/

#include<iostream>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
string c1, c2;
int a[N], b[N], r[N];

void solve(int a[], int b[], int la, int lb) {
    int i, j;
    for(i = 0; i != N; i++) r[i] = 0;
    for(i = 0; i != la; i++)
    {
        for(j = 0; j != lb; j++)
        {
            int k = i + j;
            r[k] += a[i] * b[j];
            while(r[k] > 9)
            {
                r[k + 1] += r[k] / 10;
                r[k] %= 10;
                k++;
            }
        }
    }
    int l = la + lb - 1;
    while(r[l] == 0 && l > 0) l--;
    for(int i = l; i >= 0; i--) cout << r[i];
    cout << endl;
}

int main() {
     while(cin >> c1 >> c2)
    {
        int la = c1.size(), lb = c2.size();
        for(int i = 0; i != la; i++)
            a[i] = (int)(c1[la - i - 1] - '0');
        for(int i = 0; i != lb; i++)
            b[i] = (int)(c2[lb - i - 1] - '0');
        solve(a, b, la, lb);
    }
    return 0;
}
