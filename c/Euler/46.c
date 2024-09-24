/*************************************************************************
	> File Name: 46.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 12 Sep 2024 08:35:30 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 1000000

int signArr[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};


void prime_screen(){
    for(int i = 2; i <= MAX_N; i++){
        if(!signArr[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > MAX_N) break;
            signArr[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        } 
    }
    return;
}

void odd_screen(){
    for(int i = 0; i < MAX_N; i++){
        if(signArr[i] && i % 2 == 0) signArr[i] = 0;
    }
    return;
}

void gede_screen(){
    for(int i = 1; i <= prime[0]; i++){
        int j = 1;
        while(prime[i] + 2 * j * j <= MAX_N){
            signArr[prime[i] + 2 * j * j] = 0;
            j++;
        }
    }
    return;
}

void find(){
    for(int i = 0; i < MAX_N; i++){
        if(signArr[i]) printf("result = %d\n", i);
    }

}
void DEBUG(){
    printf("num(prime) = %d\n", prime[0]);
    for(int i = 1; i <= prime[0]; i++) printf("%d", prime[i]);
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            printf("%2d ", signArr[j + i * 10]);
        }
        printf("\n");
        for(int j = 0; j < 10; j++){
            printf("%2d ", j + i * 10);
        }
        printf("\n");
    }  
}
int main(){
    prime_screen();
    odd_screen();
    gede_screen();
    //DEBUG();
    find();
    return 0;
}
