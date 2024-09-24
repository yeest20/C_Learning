/*************************************************************************
	> File Name: HZoj_101.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 11:21:40 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //输入整型a(最多4位)，输出各位数字和
    char s[10]; 
    scanf("%s", s);
    int a = 0, b = 0, c = 0, d = 0;
    sscanf(s,"%1d%1d%1d%1d", &a, &b, &c, &d);    // %1d指定读入整型位数
    printf("%d\n", a + b + c + d);
    return 0;
}
