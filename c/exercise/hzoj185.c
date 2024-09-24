/*************************************************************************
	> File Name: hzoj185.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 04:25:57 PM CST
 ************************************************************************/

#include<stdio.h>
int f(int n){
    if(n ==1 || n == 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
}
