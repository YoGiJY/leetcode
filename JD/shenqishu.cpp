/*************************************************************************
	> File Name: shenqishu.cpp
	> Author: yao jiang
	> Mail: yao.jiang@tongji.edu.cn
	> Created Time: Fri Sep  8 20:02:07 2017
 ************************************************************************/


#include<iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int sum(string s) {
    int ans = 0;
    for (char c : s) {
        ans += c - '0';
        
    }
    return ans;
}
int cal(int l, int r) {
    map<string, int> m;
    int ans = 0;
    for (int i = l; i <= r; i++) {
        string t = to_string(i);
        sort(t.begin(), t.end());
        if (m.count(t) > 0) {
            ans++;
            continue;
        }
        else {
            int s = sum(t);
            if (s % 2 == 1) continue;
            int h = s / 2;
            int tmp = t[0]-'0';
            int i = 0, j = 1;
            for (; j < t.size();) {
                if (tmp == h) {
                    m[t]++;
                    ans++;
                    break;
                }
                else if (tmp < h) {
                    tmp += t[j] - '0';
                    j++;
                }
                else if (tmp > h) {
                    tmp -= t[i] - '0';
                    i++;
                }
            }
        }
    }
    return ans;
}
int main() {
    int l, r;
    cin >> l >> r;
    int t = cal(l,r);
    cout << t << endl;
    return 0;
}









