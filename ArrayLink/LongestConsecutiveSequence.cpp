/*************************************************************************
	> File Name: LongestConsecutiveSequence.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Sun, Jul 23, 2017  1:51:05 PM
 ************************************************************************/

//Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
//For example, Given [100, 4, 200, 1, 3, 2] , The longest consecutive elements sequence is [1, 2,
//3, 4] . Return its length: 4.
//Your algorithm should run in O(n) complexity.

#include<iostream>
#include<map>
using namespace std;

class soulution {
    public int LongestCS(int *a, int length){
        if (a == NULL) return -1;
        if(length) return -1;
        map <int,int> hash_map();
        for (int i = 0;int <length;++i){
            hash_map.add(a[i],1)
        }
        int mapnum = 0;
        int key = 0;
        length = 0;
        for(int i=0;i<length;++i){
            if(a[i]-1>0){
                if(hash_map(a[i]-1)==1){
                    length++;
                }
                else{
                    key = length;
                    length = 0;
                }
            }
            else{
                if(hash_map(a[i]+1)==1){
                    length++;                    
                }
                else{
                    key = length;
                    length = 0;
                }
            }
            maxnum = max(maxnum,key);
        }
    }
}
