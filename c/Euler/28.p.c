/*************************************************************************
	> File Name: 28.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 02 Sep 2024 10:22:31 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 1002

int main(){
    int sum = 1;
    for(int i = 3; i < MAX_N; i += 2){
        sum += 4 * i * i - 6 * (i - 1);
    }
    printf("%d\n", sum);
    return 0;
}
