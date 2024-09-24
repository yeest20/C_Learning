/*************************************************************************
	> File Name: 6.sscanf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 07:13:49 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // sscanf 从字符数组中读取数据
    // 参数：1. 字符数组 2. 格式控制 3.可变参数列表
    char s[100]= "123 456 789";
    int a,b,c;
    sscanf(s,"%d%d%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
