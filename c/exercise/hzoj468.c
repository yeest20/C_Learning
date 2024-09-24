/*************************************************************************
	> File Name: hzoj468.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 03:43:57 PM CST
 ************************************************************************/

#include<stdio.h>
int gcd(int m, int n){
    if(!n) return m;
    return gcd(n, m % n);
}


int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}
