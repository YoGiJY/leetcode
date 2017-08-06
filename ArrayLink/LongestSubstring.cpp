
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int i = 0, j = 0;
    int maxlen = 0;
    map<char, int> hashmap;
    hashmap[s[0]] = 0;
    int pre;
    for(int i = 0;i<n;++i){
        if(hashmap.find(s[i])!=hashmap.end()){
            if (pre < hashmap[s[i]])
                pre = hashmap[s[i]];
        }
        maxlen = max(maxlen,i-pre);
        hashmap[s[i]] = i;
    }
    maxlen = max(maxlen, n-i);
    return maxlen;
}
