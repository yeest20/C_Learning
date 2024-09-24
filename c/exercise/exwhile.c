/*************************************************************************
	> File Name: exwhile.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 27 Jul 2024 12:53:40 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //while练习
    int x;
    //while里面就已经有输入了
    while(scanf("%d", &x) != EOF){
        printf("2 * x = %d\n", 2 * x);
    }

    return 0;
}
