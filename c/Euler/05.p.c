/*************************************************************************
	> File Name: 05.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 02 Sep 2024 05:22:55 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>


int gcd(int a, int b){
    return (b ? gcd(b, a % b) : a);
}

long long lcm(long long a,long long b){
    return a  / gcd(a, b) * b;
}

int main(){
    long long ans = 1;
    for(int i = 2; i < 21; i++){
        ans = lcm(ans, i);
    }
    printf("%lld\n", ans);
    return 0;
}
