/*************************************************************************
	> File Name: 3.address_len.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 08:26:50 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    double b;
    char c;

    printf("sizeof(int &) = %lu\n", sizeof(&a));
    printf("sizeof(double &) = %lu\n", sizeof(&b));
    printf("sizeof(char &) = %lu\n", sizeof(&c));

    return 0;
}
