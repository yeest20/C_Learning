/*************************************************************************
	> File Name: 1.problem.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 31 Aug 2024 10:24:22 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX_N 1000

int is_val(int n){
    return (n % 3 == 0 || n % 5 == 0);
}
// O(n)
int fun1(){
    int sum = 0;
    for(int i = 1; i < MAX_N; i++){
        if(is_val(i))  sum += i;
    }
    printf("%d\n", sum);
    return sum;
}

// O(1)
int sum(int n, int max){
    int res;
    int an = max - max % n;
    res = ((n + an) * (max / n)) >> 1;
    return res;
}

int main(){
    printf("%d\n", sum(3, MAX_N - 1) + sum(5, MAX_N - 1) - sum((3 * 5), MAX_N - 1));

    return 0;
}
