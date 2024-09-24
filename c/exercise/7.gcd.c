/*************************************************************************
	> File Name: 7.gcd.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 19 Aug 2024 04:32:24 PM CST
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a % b);


}



int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }

    return 0;
}
