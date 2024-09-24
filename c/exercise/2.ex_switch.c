/*************************************************************************
	> File Name: 2.ex_switch.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 11:28:09 AM CST
 ************************************************************************/

#include<stdio.h>
// switch 结构练习
int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 1: printf("one\n");break;
        case 2: printf("two\n");break;
        case 3: printf("three\n");break;
        default: printf("error\n");break;
    }
}
