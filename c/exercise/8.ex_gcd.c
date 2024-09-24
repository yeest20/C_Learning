/*************************************************************************
	> File Name: 8.ex_gcd.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 12:29:05 PM CST
 ************************************************************************/

#include<stdio.h>
int x, y, nx, ny;
int ex_gcd(int a, int b){
    if(!b) {x = 1, y = 0; return a;}

    int c = ex_gcd(b, a % b); 
    // 回溯过程
    nx = y;
    ny = x - a / b * y;
    x = nx, y = ny;
    return c;
}


int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, ex_gcd(a, b));
    }
    return 0;
}
