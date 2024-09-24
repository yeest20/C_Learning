/*************************************************************************
	> File Name: 11.math.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 02:59:09 PM CST
 ************************************************************************/

#include <stdio.h>
// 数学函数库
#include <math.h>
// abs所在库
#include <stdlib.h>
//常用数学函数
int main(){
    double a = 2.0, b = 3.0;
    printf("pow(2,3) = %.2lf\n", pow(a, b));
    printf("sqrt(2) = %.2lf\n", sqrt(2.0)); 
    printf("ceil(4.1) = %.2lf\n", ceil(4.1));
    printf("floor(4.99) = %.2lf\n", floor(4.999));
    
    printf("abs(-85) = %d\n", abs(-85));
    printf("fabs(-85.9) = %.2lf\n", fabs(-85.9));
    printf("acos(-1) = %.6lf\n", acos(-1));
    return 0;
    
}
