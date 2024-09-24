/*************************************************************************
	> File Name: 19.pointer.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 04:22:19 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int* p1;
    double* p2;
    char* p3;
    int a = 123;
    double b = 45.6;
    char c = 'h';
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("p1 = %p\np2 = %p\np3 = %p\n", p1, p2, p3);
    printf("&a = %p\n&b = %p\n&c = %p\n", &a, &b, &c);

    printf("*p1 = %d\n*p2 = %.2lf\n*p3 = %c\n", *p1, *p2, *p3);

    return 0;
}
