/*************************************************************************
	> File Name: HZoj_97.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 11:04:41 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //输入整数n，输出1+2+...n
    int n;
    long long result;
    scanf("%d", &n);
    result = 1LL * n * (n + 1) / 2;  // 加入一个LL类型
    printf("%lld\n", result);
    return 0;
}
