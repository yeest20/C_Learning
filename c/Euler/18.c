/*************************************************************************
	> File Name: 18.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 11:20:42 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 15

int val[MAX_N + 5][MAX_N + 5];
int F[MAX_N + 5][MAX_N + 5];

int max(int a, int b){
    return a > b ? a : b;
}

int dfs(int i, int j, int n){
    if(i == n) return 0;  
    if(F[i][j]) return F[i][j];
    //printf("%d ", val[i][j]);
    int a = dfs(i + 1, j, n);
    int b = dfs(i + 1, j + 1, n);
    int x =  max(dfs(i + 1, j, n), dfs(i + 1, j + 1, n)) + val[i][j];
    F[i][j] = x;
    return x;
}

int main(){
    for(int i = 0; i < MAX_N; i++){
        for(int j = 0; j <= i; j++){
            scanf("%d", &val[i][j]);
        }
    }
    for(int i = 0; i < MAX_N; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", val[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", dfs(0, 0, MAX_N));
    return 0;
}
