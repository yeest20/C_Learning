/*************************************************************************
	> File Name: hzoj103.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 05 Aug 2024 09:10:53 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", a % b == 0 ? "YES":"NO");
    return 0;

}
