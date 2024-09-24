/*************************************************************************
	> File Name: 6.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 01 Sep 2024 08:16:36 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N  100
int main(){
    int sum = (1 + MAX_N) * MAX_N >> 1;
    int sumsquare = sum * sum;
    int squaresum = MAX_N * (MAX_N + 1) * ((MAX_N << 1) + 1)  / 6;
    /*for(int i = 1; i < MAX_N + 1; i++){
        squaresum += i * i;
    }*/
    printf("%d - %d = %d\n", sumsquare, squaresum, sumsquare - squaresum);
    return 0;
}
