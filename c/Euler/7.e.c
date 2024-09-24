/*************************************************************************
	> File Name: 7.e.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 11 Sep 2024 10:03:19 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 100

int prime[MAX_N + 5] = {0};

void init_prime(){
    for(int i = 2; i < MAX_N; i++){
        if(prime[i]) continue;
        prime[i] = i;
        for(int j= 2, I = MAX_N / i; j < I; j++){
            //if(prime[i * j])  continue;
            prime[i * j] = i;
        }
    }
    return ;
}


int main(){
    init_prime();
    for(int i = 0; i < MAX_N; i++){
        printf("max(%d) --> %d\n", i, prime[i]);
    } 
    return 0;
}
