/*************************************************************************
	> File Name: 8.string.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 05:24:35 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    //字符串拷贝
    char str1[10] = "abc";
    printf("str1 = %s\n", str1);
    strcpy(str1,"def");
    printf("str1 = %s\n", str1);
    //字符串统计
    char str2[] = "hello\0world";
    printf("strlen(str2) = %lu\n", strlen(str2));
    printf("str2:%s\n", str2);
    printf("sizeof(str2) = %lu\n", sizeof(str2));
    str2[5] = 'A';
    printf("str2:%s\n", str2);
    //字符串比较: d的ASC码值 - \0的ASC码值 = 100
    char str3[] = "abc\0def", str4[] = "abc";
    printf("strcmp(str3,str4) = %d\n", strcmp(str3,str4));
    printf("memcmp(str3,str4) = %d\n", memcmp(str3,str4,8));
    //内存设置memset
    int arr[10];
    for(int i = 0; i < 10; i++) arr[i] = rand() % 100;
    for(int i = 0; i < 10; i++) printf("arr[%d] = %d\n", i, arr[i]);
    memset(arr, 1, sizeof(arr));
    for(int i = 0; i < 10; i++) printf("arr[%d] = %d(%x)\n", i, arr[i], arr[i]);
     
    return 0;
}
