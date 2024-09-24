/*************************************************************************
	> File Name: hzoj881.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 07:21:03 PM CST
 ************************************************************************/

#include<stdio.h>
void swap(int* p1, int* p2){
    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^= *p2;
    return;
}


int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
