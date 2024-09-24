/*************************************************************************
	> File Name: 7.sprintf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 07:17:53 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //sprintf 将内容输出到一个字符串
    //参数：1.输出到的字符串 2.格式控制 3.可变参数列表
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str,"%d.%d.%d.%d", &a, &b, &c, &d);
    sprintf(str,"%d:%d:%d:%d", a, b, c, d);
    printf("%s\n",str);

    return 0;
}
