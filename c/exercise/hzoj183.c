/*************************************************************************
	> File Name: hzoj183.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 04:29:22 PM CST
 ************************************************************************/

#include<stdio.h>
int f(int x){
    if(x <= 0) return 0;
    if(x == 1) return 1;
    if(x > 1 && x % 2 == 0) return 3 * f(x / 2) - 1;
    if(x > 1 && x % 2 == 1) return 3 * f((x + 1) / 2) - 1;
}


int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;

}
