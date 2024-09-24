/*************************************************************************
	> File Name: hzoj149.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 12:57:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char s[55];
    // 存储最后一个字符串的内容,所以可以读完以后再算长度
    // 标准字符串：非空=非‘ ’和‘Enter’
    while(scanf("%s", s) != EOF);
    printf("%s\n", s);
    printf("%lu\n", strlen(s));
    return 0;
}
