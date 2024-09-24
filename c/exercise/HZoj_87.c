/*************************************************************************
	> File Name: HZoj_87.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 10:46:10 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // 输入矩形长和宽，float型；输出矩形周长和面积，结果保留两位小数。
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2lf\n", 2 * (a + b));
    printf("%.2lf\n", a * b);
    
    return 0;
}
