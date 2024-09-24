/*************************************************************************
	> File Name: 07.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 03 Sep 2024 01:11:52 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int is_prime(int n){
    for(int i = 2, I = sqrt(n); i <= I; i++){
       if (n % i == 0) return 0; 
    }
    return 1;

}

#define MAX_N  200000
void f1(){
    int cnt = 0;
    for(int i = 3; ; i += 2){
        if(is_prime(i)) cnt += 1;
        if(cnt == 10000) {printf("%d\n", i); break;}
    }
    return;
}
int arr[MAX_N + 5] = {0};

int prime_sieve(int *arr){
    int cnt = 0;
    for(int i = 2; i < MAX_N; i++){
        if(arr[i]) continue;
        arr[++arr[0]] = i;
        cnt++;
        for(int j = 2; i * j < MAX_N; j++){
            arr[i * j] = 1;
        }
    } 

    return cnt;
}


void f2(){
    int cnt = prime_sieve(arr);
    printf("%d\n", arr[10001]);
    return;
}




int main(){
    f2(); 
    return 0;
}
