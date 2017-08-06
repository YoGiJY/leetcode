/*************************************************************************
    > File Name: erjingzhinum.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Fri Aug  4 20:10:59 2017
 ************************************************************************/

#include<iostream>
using namespace std;

int numof2(int n)
{
    if (n == 0) return 0;
    unsigned int num = n;
    int k = 0;
    while (num){
        num = num &(num-1);
        k++;
    }
    return k;
}


int main(){
    int n;
    cin >> n;
    cout << numof2(n)<<endl;
    return 0;

}
