/*************************************************************************
	> File Name: 3.sum.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 18 Aug 2024 08:14:26 PM CST
 ************************************************************************/

#include<stdio.h>
int sum(int a, int b, int d){
    int n = (b - a) / d + 1;
    int an = a + (n- 1) * d;
    return  (a + b) * n / 2;
}

int main(){
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    printf("%d\n", sum(a, b, d));

    return 0;
}
