/*************************************************************************
	> File Name: 12.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 10:22:06 PM CST
 ************************************************************************/

#include<stdio.h>

long long  triangle(long long  n){
    return n * (n + 1) >> 1;
}

long long count(long long n){
    int cnt = 0;
    for(long long  i = 1; i * i < n + 1; i++){
        if(i * i == n) cnt += 1;
        if(n % i == 0) cnt += 2;
    }
    return cnt; 
}

int main(){
    long long  ans = 0, n = 0;
    while(1){
        n++;
        if(count(triangle(n)) <= 500) continue;
        ans = triangle(n);
        break;
    }
    printf("%lld\n", ans);
    return 0;
}
