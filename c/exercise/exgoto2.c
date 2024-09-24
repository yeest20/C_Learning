/*************************************************************************
	> File Name: exgoto2.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 29 Jul 2024 09:24:36 AM CST
 ************************************************************************/

#include<stdio.h>
//goto 实现循环
int main(){
    int n, i = 1;
    scanf("%d", &n);
    for_begin:
        if(i % 3 != 0) printf("%d ", i);
        i++;

    i <= n && ({goto for_begin;0;});
    printf("\n");


    return 0;
}
