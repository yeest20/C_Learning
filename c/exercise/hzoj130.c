/*************************************************************************
	> File Name: hzoj130.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 06:04:01 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int m, n;
    double sum = 0, charity = 0.00417;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < n; i++){
        sum = (sum + m) * (1 + charity);
    }
    printf("$%.2lf\n", sum);

    return 0;
}
