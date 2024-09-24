/*************************************************************************
	> File Name: 3.fprintf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 04:33:08 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    fprintf(stdout, "hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr, "n = %d\n", n);


    return 0;
}
