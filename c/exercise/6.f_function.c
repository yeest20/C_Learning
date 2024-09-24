/*************************************************************************
	> File Name: 6.f_function.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 19 Aug 2024 03:55:47 PM CST
 ************************************************************************/

#include<stdio.h>
// 阶乘递归函数
int f(int n){
    printf("in f(%d)\n", n);
    int result;
    if(n == 1) result = 1;
    else result = n * f(n - 1);
    printf("out f(%d)\n", n);
    return result;
}


int main(){
    int n;
    while(scanf("%d", &n)){
        printf("f(%d) = %d\n", n, f(n));
    }
    return 0;
}
