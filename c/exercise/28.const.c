/*************************************************************************
	> File Name: 28.const.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 02:54:45 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    const int a = 123;
    int b = 456;
    const int* p1 = &a;
    int const *p2 = &b;// 常量指针
    p1 = &b;
    //p1[0] = 789;   //非法语句
    
    int * const p3 = &b; // 指针常量
    p3[0] = 789;
    // p3 = &a; // 非法语句
    return 0;
}
