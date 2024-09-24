/*************************************************************************
	> File Name: 4.switch.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 11:22:17 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch(a){
        case 1:printf("a = 1\n");break;
        case 2:printf("a = 2\n");break;
        case 3:printf("a = 3\n");break;
        case 4:printf("a = 4\n");break;
        default:printf("default value...\n");

    }

    return 0;
}
