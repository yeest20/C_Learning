/*************************************************************************
	> File Name: 36.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 02 Sep 2024 09:55:49 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int is_palindrome_base(int n, int base){
    int x = n, y = 0; 
    do{
        y = (x % base) + y * base;
        x /= base;
    }while(x);
    return y == n;
}

int main(){
    //test
    //printf("%d ", is_palindrome_base(585, 10));
    //return 0;
    int double_palindrome[1000], n = 0;
    int sum = 0;
    for(int i = 1; i < MAX_N; i++){
        if(is_palindrome_base(i, 10) && is_palindrome_base(i, 2)){
            double_palindrome[n] = i;
            printf("double_palindrome[%d] = %d\n", n, i);
            sum += i;
            n++;
    }
    }
    printf("sum = %d\n", sum);

    return 0;
}
