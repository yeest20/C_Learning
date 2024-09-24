/*************************************************************************
	> File Name: 9.digit.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 01:51:41 PM CST
 ************************************************************************/

#include<stdio.h>
// 输出二进制
void print_digit(int x){
    for(int i = 21; i >= 0; i--){
    printf("%c",(x & (1 << i))? '1':'0');
    }
    printf("\n");
    return ;
}
// 位操作
int main(){
    // 按位与\或
    int a = 5, b = 3;
    printf("a = ");print_digit(a);
    printf("b = ");print_digit(b);
    printf("a & b = ");print_digit(a & b);
    printf("a | b = ");print_digit(a | b);
    // 异或 ^
    printf("a ^ b =");print_digit(a ^ b);
        // 交换值,自逆运算性质应用
    a ^= b; b ^= a; a ^= b;
    printf("a = ");print_digit(a);
    printf("b = ");print_digit(b);
    // 按位取反
    printf("~a = ");print_digit(~a);
    printf("~b = ");print_digit(~b);
    // 补码
    printf("a = %d\n", a);
    printf("~a + 1 = %d\n", ~a + 1 );

    //取得一个二进制数的最后一位1
    int x;
    printf("取得一个数的二进制表示的最后一位1，请输入一个十进制数：");
    scanf("%d", &x);
    printf("x = ");print_digit(x);
    printf("(-x & x) = "); print_digit(-x & x);
    // 左移右移
    int c = 1279813123, d = -c;
    printf("c = ");print_digit(c);
    printf("d = ");print_digit(d);
    printf("c << 1 = "); print_digit(c << 1);
    printf("c >> 1 = ");print_digit(c >> 1);
    printf("d << 1 = "); print_digit(d << 1);
    printf("d >> 1 = ");print_digit(d >> 1);
    // 左移*2  右移/2
    printf(" a = %d, b = %d\n", a, b);
    printf("a << 1 = %d, b >> 1 = %d, -b >> 1(右移向下取整) = %d\n", a << 1, b >> 1, (-b) >> 1);

    return 0;
}
