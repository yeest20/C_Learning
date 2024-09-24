/*************************************************************************
	> File Name: E.7-2.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 11 Sep 2024 01:44:13 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 100
int prime[MAX_N + 5] = {0};
void init_prime(){
    for(int i = 2; i <= MAX_N; i++){
        if(prime[i]) continue;
        prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }


    return ;
}

int main(){
   init_prime();
    for(int i = 1; i <= prime[0]; i++){
        printf("%d\n", prime[i]);
    }

    return 0;
}
