/*************************************************************************
	> File Name: 3.ex_switch.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 11:31:20 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 1: printf("one ");
        case 2: printf("two ");
        case 3: printf("three\n");break;
        default: printf("error\n");
    }

}
