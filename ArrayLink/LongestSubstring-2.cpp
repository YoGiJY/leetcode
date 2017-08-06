/*************************************************************************
    > File Name: LongestSubstring-2.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug  6 15:07:06 2017
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int LongestSubstring(string s){
    int maxlen = 0;
    int pre = 0;
    map<char,int> hashmap;
    for(int i = 0; i<s.length();++i){
        hashmap[s[i]] = -1;
    }
    hashmap[s[0]] = 0;
    for(int i = 1; i < s.length();++i)
    {
        pre = max(pre,hashmap[s[i]]);
        maxlen = max(maxlen,i-pre);
        hashmap[s[i]] = i;
    }
    return maxlen;
}

int main(){
    string s;
    cin >> s ;
    cout << LongestSubstring(s)<<endl;
    return 0;
}
