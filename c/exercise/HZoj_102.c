/*************************************************************************
	> File Name: HZoj_102.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 11:30:37 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //水池问题，输入四个整数，输出一个浮点数
    double a, b, c, t; //尽量根据最麻烦的那个数据类型走
    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
    double result;
    result = (1 - (1/a + 1 / b) * t) / (1 / a + 1 / b - 1 / c) + t;
    printf("%.2lf\n", result);
    return 0;
}
