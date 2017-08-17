/*************************************************************************
    > File Name: strcpy.cpp
    > Author:yao jiang 
    > Mail: yao.jiang@tongji.edu.cn
    > Created Time: Wed Aug  9 23:02:25 2017
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

char *strcpy(char *strDest, const char *strSrc)
{
    assert((strDest!=NULL) && (strSrc !=NULL));// 2分
    char *address = strDest;                   // 2分
    while( (*strDest++ = * strSrc++) != '\0') NULL;
    return address;                          // 2分
}
