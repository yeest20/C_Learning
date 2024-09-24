/*************************************************************************
	> File Name: hzoj466.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 03:24:42 PM CST
 ************************************************************************/

#include<stdio.h>
int is_palindrome(int n){
    int x, y;
    x = n;
    y = 0;
    while(x){
        y = y * 10 + x % 10;
        x = x / 10;
    }
    return y == n;
}



int main(){
    int n, ans = 0;
    scanf("%d", &n);

    for(int i = 1; i < n + 1; i++){
        ans += is_palindrome(i);
    }
    printf("%d\n", ans);
    return 0;
}
