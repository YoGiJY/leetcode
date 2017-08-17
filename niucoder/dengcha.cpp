/*************************************************************************
    > File Name: dengcha.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Thu Aug 17 20:49:59 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> data;
    for(int i = 0;i < n; ++i){
        int temp;
        cin >> temp;
        data.push_back(temp);
    }
    int flag = 1;
    sort(data.begin(),data.end());
    int d = data[0]-data[1];
    for(int i = 0;i<data.size()-1;++i){
        if(d != data[i]-data[i+1]){
            flag = 0;
            break;
        }
    }
    if(flag == 0) cout << "Impossible"<<endl;
    if(flag == 1) cout << "Possible" <<endl;
    return 0;
}

