/*************************************************************************
	> File Name: 3.decl_def.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 24 Aug 2024 03:07:11 PM CST
 ************************************************************************/

#include<stdio.h>
//函数声明
int add(int, int);

//变量声明
extern int c, d;
int main(){
    //变量定义
    int a = 1, b = 2;
    printf("a + b + c + d = %d\n", a + b + c + d);
    return 0;
}

//函数定义
int add(int a, int b){
    return a + b;
}
