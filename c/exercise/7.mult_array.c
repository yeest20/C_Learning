/*************************************************************************
	> File Name: 7.mult_array.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 01:51:20 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    ///多维数组
    int b[3][4], cnt = 1;
    for(int i = 0; i < 4; i++){
        for( int j = 0; j < 3; j++ ){
            b[j][i] = (cnt++);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++)
            printf("%3d ", b[i][j]);
        printf("\n");
    }
    return 0;
}
