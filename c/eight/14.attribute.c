/*************************************************************************
	> File Name: 14.attribute.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 04:22:06 PM CST
 ************************************************************************/

#include<stdio.h>

int arr[10];
__attribute__((constructor))
void test1(){
    arr[0] = 100;
    return;
}

__attribute__((constructor))
void test2(){
    arr[1] = 99;
    return;
}

__attribute__((constructor))
void test3(){
    arr[2] = 10086;
    return;
}

int main(){
    for(int i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
