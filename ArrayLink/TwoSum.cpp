/*************************************************************************
	> File Name: TwoSum.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Sun, Jul 23, 2017  3:11:55 PM
 ************************************************************************/

//Given an array of integers, find two numbers such that they add up to a specific target number.
//The function twoSum should return indices of the two numbers such that they add up to the target, where
//index1 must be less than index2. Please note that your returned answers (both index1 and index2) are
//not zero-based.
//You may assume that each input would have exactly one solution.
//Input: numbers={2, 7, 11, 15}, target=9
//Output: index1=1, index2=2

#include<iostream>
#inlcude<HashMap>
using namespace std;

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        final HashMap<Integer, Integer> myMap = new HashMap<Integer, Integer>();
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            myMap.put(nums[i],i);
        }
        for (int i = 0; i < nums.length; i++) {
            final Integer v = myMap.get(target-nums[i]);
            if (v != null && v > i) {
                return new int[]{i+1, v+1};
            }
        }
        return null;
    }
};


