/*************************************************************************
	> File Name: 1.condition_expression.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 26 Jul 2024 10:08:46 AM CST
 ************************************************************************/

#include<stdio.h>
// 条件表达式
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a == b (%d)\n", a == b);
    printf("a != b (%d)\n", a != b);
    printf("a < b (%d)\n", a < b);
    printf("a > b (%d)\n", a > b);
    printf("a <= b (%d)\n", a <= b);
    printf("a >= b (%d)\n", a >= b);
    printf("!(a == b) (%d)\n", !(a == b));
   //验证条件表达式的返回值能否参与运算：可以 
    a = a + (a == b);
    printf("%d\n", a);
    //逻辑与、或
    printf("a < b && a == 3 (%d)\n", a < b && a == 3);
    printf("a < b || a == 3 (%d)\n", a < b || a == 3);
    printf("1 && 1 (%d)\n", 1 && 1);
    printf("1 && 0 (%d)\n", 1 && 0);
    printf("0 && 1 (%d)\n", 0 && 1);
    printf("0 && 0 (%d)\n", 0 && 0);
    printf("1 || 1 (%d)\n", 1 || 1);
    printf("1 || 0 (%d)\n", 1 || 0);
    printf("0 || 1 (%d)\n", 0 || 1);
    printf("0 || 0 (%d)\n", 0 || 0);

    return 0;
}
