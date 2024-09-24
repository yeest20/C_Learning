/*************************************************************************
	> File Name: 35.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 11 Sep 2024 03:20:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_N 1000000

int arr[MAX_N + 5] = {0};
int prime[MAX_N/10] = {0};
int piPrime[100] = {0};

void init_prime(){
    for(int i = 2; i <= MAX_N; i++){
        if(!arr[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > MAX_N) break;
            arr[prime[j] * i] = 1;
            if(!(i % prime[j])) break;
        }
    }
    return;
}

int is_piprime(int n){
    int b = (int)log10(n);
    for(int i = 0; i < b; i++){
        n = n / 10 + (n % 10) * (int)pow(10, b); 
        //int flag = 0;
        //for(int i = 1; i <= prime[0]; i++){
          //  if (n == prime[i]) {flag = 1;break;}
        //}
        if(arr[n]) return 0;
    }
    return 1;
    
}

void piprime(){
    for(int i = 1; i <= prime[0]; i++){
        if(is_piprime(prime[i])) {
            piPrime[0] += 1;
            piPrime[piPrime[0]] = prime[i];
        }
    }

    return;
}
int main(){
    init_prime();
    piprime();
    for(int i = 0; i < piPrime[0] + 1; i++){
        printf("%d ", piPrime[i]);
    }
    printf("\n");
    return 0;
}
