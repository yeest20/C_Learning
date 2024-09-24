/*************************************************************************
	> File Name: 3.if_else.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 10:58:12 AM CST
 ************************************************************************/

#include<stdio.h>
//分支结构：if else
int main(){
    int a, b, c;
    scanf("%d%d", &a, &b);
    if(a < b) {
        //复合语句
        c = a * b;
        printf("%d\n", c);
    }
    else{
        c = a + b; 
        printf("%d\n", c);

    }

    return 0;
}
