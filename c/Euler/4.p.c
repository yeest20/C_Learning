/*************************************************************************
	> File Name: 3.p.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 01 Sep 2024 03:36:23 PM CST
 ************************************************************************/

#include<stdio.h>

int is_palindrome(int n){
    int x = n, y = 0; 
    do{
        y = (x % 10) + y * 10;
        x /= 10;
    }while(x);
    return y == n;
}

int main(){
    int max_palindrome = 1;
    for(int i = 999; i > 99; i--){
        for(int j = i; j > 99; j --){
            if(i * j > max_palindrome && is_palindrome(i * j)) max_palindrome = i * j;
    }
    }
    printf("%d\n", max_palindrome); 
    return 0;
}
