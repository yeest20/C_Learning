/*************************************************************************
	> File Name: hzoj467.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 03:38:14 PM CST
 ************************************************************************/

#include<stdio.h>
long long f(int n){
    if(n == 1) return 1;
    return n * f(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}
