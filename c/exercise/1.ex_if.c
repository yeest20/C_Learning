/*************************************************************************
	> File Name: 1.ex_if.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 11:05:09 AM CST
 ************************************************************************/
// if else 练习
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("HEHE\n");
    }
    // else if(0 < n < 60)输出结果不对，
    // 原因：两个运算符，0 < n 和 n < 60, n = 5时，0 < 5 = 1, 1 < 60 = 1;
    // 慎用连续的条件运算符
    else if(n < 60){
        printf("Fail\n");
    }
    else if(n < 75){
        printf("Medium\n");
    }
    else if(n <= 100){
        printf("Good\n");
    }
    return 0;
}
