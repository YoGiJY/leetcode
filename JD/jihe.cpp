/*************************************************************************
	> File Name: jihe.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Sat Sep  9 13:24:41 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int m;
    vector<int> datan;
    vector<int> datam;
    cin >> n >> m;
    for(int i = 0;i<n;++i){
        int temp;
        cin >> temp;
        datan.push_back(temp);
    }
    for(int i = 0;i<m;++i){
        int temp;
        cin >> temp;
        datam.push_back(temp);
    }
    datan.insert(datan.end(),datam.begin(),datam.end());
    sort(datan.begin(),datan.end());

    int cur = datan[0];
    for(int i = 0;i < datan.size();++i){
        if (i == 0)
           cout << datan[i];
        if(cur !=datan[i])
        {
            cout << " " <<datan[i];
            cur = datan[i];
        }
    }
    cout << endl;
    return 0;
}
