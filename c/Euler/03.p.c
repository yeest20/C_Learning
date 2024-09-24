/*************************************************************************
	> File Name: 03.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 02 Sep 2024 10:45:01 AM CST
 ************************************************************************/

#include<stdio.h>

int isprime(long long  n){
    for(long long  i = 2; i * i < n + 1; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void f1(){
    //test
    //printf("%d\n", isprime(b));
    //printf("%lld", b);
    long long b = 600851475143;
    long long allprime_factors[100];
    int n = 0;
    long long max_prime_factor = 1;
    for(long long i = 1; i * i < b + 1; i++){
        if(!(b % i == 0)) continue;
        allprime_factors[n++] = i;
        allprime_factors[n++] = b / i; 
    }
    for(int i = 0; i < n; i++){
        if(!isprime(allprime_factors[i])) continue;
        if(allprime_factors[i] > max_prime_factor) max_prime_factor = allprime_factors[i];
    }
    printf("%lld\n", max_prime_factor);
    return ;
}


#define MAX_N 600851475143LL
void f2(){
    long long ans = 0, N = MAX_N, i = 2;
    while(i * i < N){
        if(N % i == 0)  ans = i;
        while(N % i == 0) N /= i;
        i += 1;
    }
    if(N != 1) ans = N;
    printf("%lld\n", ans);
    return;
}

int main(){
    f2(); 



    return 0;
}




