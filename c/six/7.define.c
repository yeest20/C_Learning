/*************************************************************************
	> File Name: 7.define.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 24 Aug 2024 10:38:13 PM CST
 ************************************************************************/

#include<stdio.h>
//宏定义:简单替换
#define PI 3.1415926

#define MAX(a,b) (a > b ? a : b)
#define S(a, b) a * b

#define P(msg)\
    printf("define P : %d\n", msg);
int main(){
    printf("PI = %lf\n", PI);
    int a = 456, b = 789;
    printf("max(%d, %d) = %d\n", a, b, MAX(4, 4));
    // 简单替换
    printf("S(3 + 7, 4) = %d\n", S(3 + 7, 4));
    S(int, p);
    int n = 123;
    p = &n;
    P(*p);
    return 0;
}
