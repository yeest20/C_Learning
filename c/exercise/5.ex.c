/*************************************************************************
	> File Name: 5.ex.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 09:42:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    //随堂练习5：输入一个角度值，输出弧度
    double x;
    
    printf("输入一个角度值:");
    scanf("%lf", &x);
    printf("%lf的弧度：%lf\n", x, x * acos(-1) / 180);
    return 0;
}
