/*************************************************************************
	> File Name: 14.one_stmt.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 29 Jul 2024 06:12:53 PM CST
 ************************************************************************/

#include<stdio.h>
//一条语句
int main(){
    int n = 5;
    while(n--) if(1){
        printf("test one_stmt...\n");
    }  
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++)
            printf("(%d,%d) ", i,j);
        printf("\n");
    }
    return 0;
}
