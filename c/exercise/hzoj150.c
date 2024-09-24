/*************************************************************************
	> File Name: hzoj150.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 02:36:47 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, m;
    int tr[205][205];
    scanf("%d%d", &n, &m);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",  &tr[j][n - i - 1]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(j != 0) printf(" ");
            printf("%d", tr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
