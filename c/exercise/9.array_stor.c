/*************************************************************************
	> File Name: 9.array_stor.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 10:31:09 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //数组存储方式
    int a[10][10];
    a[0][9] = 1;
    printf("&a[0][0] = %p\n", &a[0][0]);
    printf("&a[0][1] = %p\n", &a[0][1]);
    printf("&a[0][9] = %p\n", &a[0][9]);
    printf("&a[1][0] = %p\n", &a[1][0]);

    return 0;
}