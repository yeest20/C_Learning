/*************************************************************************
	> File Name: 1.fprintf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 29 Aug 2024 09:54:01 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("output.txt", "w");
    if(fp == NULL){
        printf("ERROR,falied to open fail...\n");
        exit(1);
    }
    int a = 123, b = 456;
    // 文件输出
    fprintf(fp, "test...\n");
    fprintf(fp,"a = %d, b = %d\n", a, b);
    // 关闭文件
    fclose(fp);
    return 0;
}
