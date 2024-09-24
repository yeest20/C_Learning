/*************************************************************************
	> File Name: 12-1.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 13 Sep 2024 11:22:35 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100000

int prime[MAX_N + 5] = {0};
int f[MAX_N + 5] = {0}; // 存因子个数
int cnt[MAX_N + 5] = {0};

void init(){
    for(int i = 2; i <= MAX_N; i++){
        if(!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > MAX_N) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) {
                f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[prime[j] * i] = cnt[i] + 1;
                break;
            }else{
                f[prime[j] * i] = f[prime[j]] * f[i];
                cnt[prime[j] * i] = 1;
            }
        }
    }
    return ;
}

int main(){
    init(); 
    long long f_max = 0, n = 1;
    while(1){
        if(n & 1){
            f_max = f[n] * f[(n + 1) >> 1];
        }else{
            f_max = f[n >> 1] * f[n + 1];
        }
        if(f_max > 500) break;
        n++;
    }
    printf("%lld\n", n * (n + 1) >> 1);
    return 0;
}
