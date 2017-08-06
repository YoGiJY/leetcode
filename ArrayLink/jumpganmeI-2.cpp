/*************************************************************************
    > File Name: jumpganmeI-2.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 16:47:01 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int jumpganmeI(vector<int> & nums){
    int n = nums.size();
    vector<int> s(n,0);
    for(int i = 1;i< nums.size();++i){
        s[i] = max(s[i-1],nums[i])-1;
        if(s[i] < 0) return false;
    }
    if(s[nums.size()-1] >=0 ){
        return true;
    }
    return false;
}

int main(){
    vector<int> nums;
    int a[] = {3,2,1,0,4};
    nums.assign(a,a+5);
    cout << jumpganmeI(nums) << endl;
}
