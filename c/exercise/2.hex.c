/*************************************************************************
	> File Name: 2.hex.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 08:12:46 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a = 0x6a; //十进制：6 * 16 + 1 = 97
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    int b = 0x7fffffff; //整型最大值：01111111 11111111 11111111 11111111
    int c = 0x80000000;//整形最小值： 10000000 00000000 00000000 00000000
    printf("MAX_INT = %d\nMIN_INT = %d\n", b, c);
    printf("input hex:");
    scanf("%x", &a);    
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    return 0;
}
