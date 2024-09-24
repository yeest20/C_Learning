/*************************************************************************
	> File Name: 4.ex.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 07:54:58 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    //随堂练习4：读入一个数字，输出其立方根
    double x;
    printf("请输入一个数字：");
    scanf("%lf", &x);
    double y = pow(x, 1.0 / 3.0);
    printf("%lf的立方根是：%lf\n", x, y);

    return 0;
}
