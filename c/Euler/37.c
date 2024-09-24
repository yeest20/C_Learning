/*************************************************************************
	> File Name: 37.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 12 Sep 2024 12:10:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_N 1000 

int primesign[MAX_N + 5] = {0}; // 所有数字，0/1标记是否为素数
int prime[MAX_N + 5] = {0}; //所有素数
int result[20] = {0};

int flip(int n){
    int t = 0;
    do{
        t = t * 10 + n % 10; 
        n = n / 10;
    }while(n);
    return t;
}


void sign_prime(){
    primesign[0] = 1;
    primesign[1] = 1;
    for(int i = 2; i <= MAX_N; i++){
        if(!primesign[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > MAX_N) break;
            primesign[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return;
}

int is_cutprime(int n){
    int digit = (int)log10(n); // int log10(3797) = 3
    int t = n;
    for(int i = 0; i < digit; i++){
        t = t / 10;
        if(primesign[t]) return 0;
    }
    t = flip(n);
    for(int i = 0; i < digit; i++){
        t = t / 10;
        if(primesign[flip(t)]) return 0;
    }
    return 1;
}

void test(){
    printf("num(prime) = %d\n", prime[0]);
    for(int i = 1; i <= prime[0]; i++){
        printf("%d ", prime[i]);
    }
    printf("\n");
    //printf("%d\n", flip(3797));
    //printf("%d\n", is_cutprime(31));

    return;
}

int main(){
    sign_prime();
    test();
    //printf("result[0] = %d\n", result[0]);
    for(int i = 5; i <= prime[0]; i++){
        if(is_cutprime(prime[i])){ 
        result[++result[0]] = prime[i];
        printf("result[%d] = %d\n", result[0], prime[i]);
        }
    }
    printf("num(result) = %d\n", result[0]);
    int sum = 0;
    for(int i = 1; i <= result[0]; i++) {
        sum += result[i];
    }
    printf("sum = %d\n", sum);

    return 0;
}
