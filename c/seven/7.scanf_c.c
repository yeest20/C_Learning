/*************************************************************************
	> File Name: 7.scanf_c.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 07:12:46 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char c1, c2;
    int a, b;
    scanf("%d", &a);
    scanf("%c%c", &c1, &c2);
    scanf("%d", &b);
    printf("a = %d, b = %d\nc1 = %d, c2 = %d\n", a, b, c1, c2);
    return 0;
}
