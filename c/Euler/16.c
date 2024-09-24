/*************************************************************************
	> File Name: 16.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 14 Sep 2024 08:08:17 AM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 1000

int num[MAX_N + 5] = {0};

int main(){
    num[0] = num[1] = 1;
    for(int i = 0; i < 100; i++){
        for(int j = 1; j <= num[0];j++) num[j] *= 1024;
        for(int k = 1; k <= num[0]; k++){
            if(num[k] < 10) continue;
            num[k + 1] += num[k] / 10;
            num[k] %= 10;
            num[0] += (k == num[0]);
        }
    }
    int sum = 0;
    for(int i = num[0]; i >= 1; i--){
        sum += num[i];
    }
    printf("%d\n", sum);
    return 0;
}
