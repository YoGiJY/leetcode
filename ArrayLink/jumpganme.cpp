/*************************************************************************
    > File Name: jumpganme.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sat Aug  5 15:48:22 2017
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
    public:
    bool canJump(const vector<int>& nums) {
        int reach = 1; 
        for (int i = 0; i < reach && reach < nums.size(); ++i)
             reach = max(reach, i + 1 + nums[i]);
        return reach >= nums.size();
    }

};

int main(){
    int data[] = {3,2,1,0,4};
    vector<int> nums;
    nums.assign(data,data+5);
    Solution a = Solution();
    cout << a.canJump(nums)<< endl;
}
