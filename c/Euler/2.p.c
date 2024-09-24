/*************************************************************************
	> File Name: 2.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 01 Sep 2024 12:35:34 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 4000000

void f1(){ 
    int n1 = 1, n2 = 2, sum = 0;
    for(int n; n2 < MAX_N + 1;){
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        n % 2 == 0 ? sum += n : (void)0;
    }

    printf("%d\n", sum + 2);
    return;
}

// 空间O（logn）
int fib[40] = {1, 1};

void f2(){
    int n = 2, sum = 0;
    while(fib[n - 2] + fib[n - 1] < MAX_N){
        fib[n] = fib[n - 1] + fib[n - 2];
        if(fib[n] % 2 == 0)  sum += fib[n];
        n++;
    }
    printf("%d\n",sum);
    return;
}


// 空间O（1） 滚动数组
int fib_roll[2] = {1, 1}; 

void f3(){
    int sum = 0;
    while(fib_roll[0] + fib_roll[1] < 4000000){
        (!((fib_roll[0] + fib_roll[1]) & 1)) ? sum += (fib_roll[0] + fib_roll[1]) : (void)0; 
        fib_roll[1] = fib_roll[0] + fib_roll[1];
        fib_roll[0] = fib_roll[1] - fib_roll[0];
    }
    printf("%d\n", sum);
    return;

}

int main(){
    f3();  

    return 0;
}
