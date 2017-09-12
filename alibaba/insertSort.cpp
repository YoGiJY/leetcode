/*************************************************************************
	> File Name: insertSort.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Tue Sep 12 15:20:45 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> data;
    vector<int> data0;

    for(int i = 0;i < n; ++i){
        int temp;
        cin >> temp;
        data.push_back(temp);
    }

    data0.assign(data.begin(),data.end());

    if(n == 1)
    {
        cout << data[0] <<endl;
        return 0;
    }
    int temp;
    for(int i = 1;i < n;++i)
    {
        for(int j = i-1; j >=0 ;--j)
        {
            if(data[j] > data[j+1])
            {
                temp = data[j+1];
                data[j+1] = data[j];
                data[j] = temp;
            }
            else
                break;
        }
    }

   if(data[0]!=data[1])
   {
       cout << data[0] << endl;
       return 0;
   }

    int i = 0;
    for(i = 1;i < n-1; ++i)
    {
        if(data[i]!=data[i-1] && data[i+1]!=data[i])
        {
            cout <<data[i]<<endl;
            break;
        }
    }
    if(n-1 == i && data[i-1]!=data[i])
        cout << data[i]<<endl;
    return 0;
}

