/*************************************************************************
	> File Name: 2.ex_string.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 06:53:11 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    //读入一个行字符串（可能包含空格），输出字符数量
    char s[100];
    int n;
    printf("输入一行字符串：");
    scanf("%[^\n]", s);    // 可以输入非换行符
    n = printf("%s", s);
    printf(" 包含%d个字符\n", n);

    return 0;
}

