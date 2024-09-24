/*************************************************************************
	> File Name: E.10.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 11 Sep 2024 02:04:07 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N  2000000

int prime[MAX_N + 5] = {0};

void init_prime(){
    for(int i = 2; i <= MAX_N; i++){
        if(prime[i]) continue;
        prime[++prime[0]] = i;
        for(int j = 2, I = MAX_N / i; j < I + 1; j++){
            prime[j * i] = 1; 
        }
    }
    return ;
}

int main(){
    init_prime();
    long long sum = 0;
    for(int i = 1; i <= prime[0]; i++) {
        sum += prime[i];
    }
    //for(int i = 0; i < 100; i++) printf("%d ", prime[prime[0] - i]);
    printf("%d %lld\n", prime[0], sum);
    return 0;
}

