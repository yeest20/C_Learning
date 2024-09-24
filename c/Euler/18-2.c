/*************************************************************************
	> File Name: 18-2.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 12:24:43 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 15

int dp[MAX_N + 5][MAX_N + 5];

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    for(int i = 0; i < MAX_N; i++){
        for(int j = 0; j <= i; j++){
            scanf("%d", &dp[i][j]);
        }
    }    
    for(int i = MAX_N - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            dp[i][j] += max(dp[i  + 1][j], dp[i + 1][j + 1]);
        }
    }
    printf("%d\n", dp[0][0]);
    return 0;
}
