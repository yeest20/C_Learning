/*************************************************************************
	> File Name: hzoj465.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 03:16:37 PM CST
 ************************************************************************/

#include<stdio.h>
int digit(long long n, int k){
    if(k == 1) return n % 10;
    return digit(n/10, k - 1);
}


int main(){
    long long n;
    int k;
    scanf("%lld%d", &n, &k);
    printf("%d\n", digit(n, k));

    return 0;
}
