/*************************************************************************
	> File Name: hzoj139.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 07 Aug 2024 11:55:36 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    // A字菱形
    int n;
    scanf("%d", &n);
    // 分层实现，先实现输出五行...
    for(int i = 0; i < 2 * n - 1; i++ ){
        for(int k = 0; k < abs(i - n + 1); k++) printf(" ");
        for(int j = 0; j < 2 * n - 2 * abs(i - n + 1); j++) printf("A");
        printf("\n");
        //printf("%d\n", 2 * n - 2 * abs(i - n + 1));
        //printf("%d\n", abs(i - n + 1));
    }

    return 0;
}
