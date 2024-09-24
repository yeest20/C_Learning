/*************************************************************************
	> File Name: 29.typedef.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 03:15:15 PM CST
 ************************************************************************/

#include<stdio.h>
typedef long long LL;
typedef int (*Arr2Dim10)[10];
typedef void (*Func)();

void test(){
    printf("hello function pointer\n");
    return;
}

int main(){
    LL a;
    printf("sizeof(a) = %lu\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p1 = arr; 
    Func  p2 = test;
    p2();
    return 0;
}
