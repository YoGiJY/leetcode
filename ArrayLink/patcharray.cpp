/*************************************************************************
    > File Name: patcharray.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 16:07:40 2017
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int patcharray(vector<int> nums, int n){
    int miss = 1;
    int i = 0;
    int added =0;
    int num = nums.size();
    while(miss <= n)
    {
        if(i<num&& miss>=nums[i])
        {
            miss += nums[i++];
        }
        else
        {
            miss += miss;
            added ++ ;
        }
    }
    return added;
}

int main(){
    vector<int> nums;
    int a[] = {1,3};
    int n = 6;
    nums.assign(a,a+2);
    cout << patcharray(nums,n) << endl;
    return 0;
}
