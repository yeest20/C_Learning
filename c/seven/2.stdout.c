/*************************************************************************
	> File Name: 2.stdout.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 04:22:28 PM CST
 ************************************************************************/
 
#include<stdio.h>

int main(){
    printf("adfasdfsdfasdfsadf456465");
    fflush(stdout);
    *((int *)(0)) = 5;

    return 0;
}
