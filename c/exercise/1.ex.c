/*************************************************************************
	> File Name: 1.ex.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 05:17:25 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // 读入整数n，输出十进制位数
    int n;
    printf("请输入一个整数:");
    scanf("%d", &n);
    int digit;
    digit = printf("%d",n);
    printf(" has %d digit(s)\n", digit);
    
    return 0;
}
