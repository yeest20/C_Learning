/*************************************************************************
	> File Name: 1.stderr.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 04:17:28 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    printf("hello world\n"); //stdout
    int n;
    scanf("%d", &n); //stdin
    perror("out of range\n");

    return 0;
}
