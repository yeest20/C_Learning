/*************************************************************************
	> File Name: 11.ifdef.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 26 Aug 2024 10:04:18 PM CST
 ************************************************************************/

#include<stdio.h>


#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif

int main(){
    printf("%d\n", a);

    return 0;
}
