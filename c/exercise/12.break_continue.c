/*************************************************************************
	> File Name: 12.break_continue.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 28 Jul 2024 11:07:54 PM CST
 ************************************************************************/

#include<stdio.h>
// break 和 continue
// continue:去除循环中不要的一些东西
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0) continue;
        printf("%d ", i);
        if(i  == 8) break;
    }
    printf("\n");

    return 0;
}
