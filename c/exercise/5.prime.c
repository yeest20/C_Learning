/*************************************************************************
	> File Name: 5.prime.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 21 Aug 2024 10:49:33 AM CST
 ************************************************************************/

#include<stdio.h>
int prime[100] = {0};

void init_prime(int n){
    prime[0] = prime[1] = 1;
    for(int i = 2; i  <= n; i++){
        if(prime[i]) continue;
        printf("%d is prime:", i);
        for(int j = i * i; j <= n; j += i){
            prime[j] = 1;
            printf(" %d", j);
        }
        printf("\n");
    }
    return;
}

int main(){
    init_prime(100);
    int x;
    while(scanf("%d", &x) != EOF){
        printf("prime[%d] = %d\n", x, prime[x]);
    }


    return 0;
}
