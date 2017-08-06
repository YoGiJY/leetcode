/*************************************************************************
    > File Name: buysell-2.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 22:38:18 2017
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int buysell(vector<int> & nums){
    int max;
    int total;
    int n = nums.size();
    max = 0;
    for(int i = n-1;i>=1;--i){
        total = nums[i]-nums[i-1];
        if(total > 0){
            max = total + max;
        }
    }
    return max;
}

int main(){
    int a[] = {3,1,4,6,5,6,1,7};
    vector<int> nums;
    nums.assign(a,a+8) ;
    cout << buysell(nums)<<endl;
    return 0;
}

