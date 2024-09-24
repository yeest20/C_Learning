/*************************************************************************
	> File Name: 8.operater_1.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 01:31:13 PM CST
 ************************************************************************/

#include<stdio.h>


int main(){
    int a = 5, b = 2, c = 7;
   
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // 赋值运算符
    a = c;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // 四则运算符
    a = c + b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a = c - b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a = c * b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // 整型做除法，向零取整
    printf("除法向0取整\n");
    a = c / b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a =-c / b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // 求余运算符
    a = c % b;
    printf("a = %d, b = %d, c = %d\n", a, b, c); 
    
    return 0;
}
