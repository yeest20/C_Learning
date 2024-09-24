/*************************************************************************
	> File Name: 30.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 01 Sep 2024 08:40:45 PM CST
 ************************************************************************/

#include<stdio.h>
#define fifth(x) x * x * x * x * x
#define MAX_N 2177280
int is_fifthnumber(int n){
    int x = n, y = 0;
    while(x){
        y = y + fifth((x % 10));
        x /= 10;
    }
    return y == n;
}


int main(){
    //printf("%d\n", fifth(3));
    //is_fifthnumber(123);
    //return 0;
    int ans[100], n = 0;
    for(int i = 2; i < MAX_N; i++){
        if(!is_fifthnumber(i)) continue;
        ans[n] = i;
        n++;
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ans[i];
    }
    printf("%d\n", sum);
    return 0;
}
