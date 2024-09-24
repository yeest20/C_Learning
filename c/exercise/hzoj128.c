/*************************************************************************
	> File Name: hzoj128.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 05:51:06 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, sum = 0;
    double avg;
    scanf("%d", &n);
    // 循环变量在初始化中定义即可
    for(int i = 0, x; i < n; i++){
        scanf("%d", &x);
        sum = sum + x;
    }
    printf("%.2lf\n", 1.00 * sum / n);

    return 0;
}
