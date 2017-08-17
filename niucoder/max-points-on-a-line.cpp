/*************************************************************************
    > File Name: max-points-on-a-line.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Sun Aug 13 11:10:31 2017
 ************************************************************************/

#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct Point
{
     int x;
     int y;
     Point() : x(0), y(0) {}
     Point(int a, int b) : x(a), y(b) {}
};



int maxPoints(vector<Point> &points) {
    
    int size = points.size();
    if(size == 0)
        return 0;
    else if(size == 1)
        return 1;
    
    int ret = 0;
    for(int i = 0;i<size;i++){
        
        int curmax = 1;
        map<double,int>mp;
        int vcnt = 0; //垂直点
        int dup = 0; //重复点
        for(int j = 0;j<size;j++){
            
            if(j!=i){
                double x1 = points[i].x - points[j].x;
                double y1 = points[i].y - points[j].y;
                if(x1 == 0 && y1 == 0){   //重复
                    dup++;
                }else if(x1 == 0){      //垂直
                    if(vcnt == 0)
                        vcnt = 2;
                    else
                        vcnt++;
                    curmax = max(vcnt,curmax);
                }else{
                    double k = y1/x1;          //斜率
                    if(mp[k] == 0)
                        mp[k] = 2;
                    else
                        mp[k]++;
                    curmax = max(mp[k],curmax);
                }
            }
        }
        ret = max(ret,curmax+dup);
    }
    return ret;
}


int main(){
    int n = 0;
    int x;
    int y;
    vector<Point> points;
    Point a;
    cin >> n;
    for (int i = 0;i < n; ++i){
        cin >> x;
        cin >> y;
        a.x = x;
        a.y = y;
        points.push_back(a);
    }
    cout << maxPoints(points) << endl;
    return 0;
}
