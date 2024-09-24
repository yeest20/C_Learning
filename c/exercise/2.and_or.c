/*************************************************************************
	> File Name: 2.and_or.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 10:26:53 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // 读入a，b，a<b输出yes，否则输出no
    int a, b;
    scanf("%d%d", &a, &b);
    // 短路原则
    a < b && printf("YES\n");
    a < b || printf("NO\n");
    return 0;
}
