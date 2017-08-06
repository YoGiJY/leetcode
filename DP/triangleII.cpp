/*************************************************************************
    > File Name: triangleII.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 18:15:08 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mininumTotal(vector<vector<int> > &triangle){
    int n = triangle.size();
    for(int i = 0;i < n; ++i){
        for(int j = 0; j < triangle[i].size();++j){
            if(j == 0) {
                triangle[i][j] +=triangle[i-1][j]; 
            }
            else if(j == triangle[i].size()-1) {
                triangle[i][j] +=triangle[i-1][j-1];
            }
            else{
                triangle[i][j] +=min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
    }
    int res = triangle[n-1][0];
    for(int i = 0;i<triangle[n-1].size();++i){
        res = min(res,triangle[n-1][i]);
    }
    return res;
}
