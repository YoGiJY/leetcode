/*************************************************************************
    > File Name: zuichangzixulie.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 18:38:18 2017
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int zuichangzixulie(vector <int> nums){
    int max = 0 ;
    int k = 0;
    int n = nums.size();
    for(int i = 0; i<n-1;++i){
        int temp = nums[i];
        k = 1;
        for(int j = i+1;j<n;++j){
            if(temp <= nums[j]){
                temp = nums[j];
                k++;
            }
            if(max < k){
                max = k;
            }
        }
    }
    return max;
}

int main(){
    int a[] = {1,2,4,6,5,4,8,5,4};
    vector <int> nums;
    nums.assign(a,a+9);
    cout << zuichangzixulie(nums)<<endl;
}
