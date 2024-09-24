/*************************************************************************
    > File Name: 1.block.c
    > Author:YEE 
    > Mail:15509992895@163.com 
    > Created Time: Thu 08 Aug 2024 11:45:57 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){//作用域1
    // 作用域:主要是分变量的作用范围
    int a = 1, b = 2;
    for(int i = 0; i < 10; i++){//子作用域
        int c = 1, d = 2;
        int a = 3, b = 4;
    //先找内部作用域中的变量(存储位置不一样)
        printf("a = %d b = %d\n", a, b);

    }
    // 可以访问a,b;无法访问c,d;
    printf("a = %d b = %d\n", a, b);
    //printf("%d %d\n", c, d);
    return 0;
}
