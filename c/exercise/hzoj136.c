/*************************************************************************
	> File Name: hzoj136.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 06:16:40 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 7; i <= n; i+=7){
        printf("%d\n", i);
    }

    return 0;
}
