/*************************************************************************
	> File Name: 4.param.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 18 Aug 2024 08:42:37 PM CST
 ************************************************************************/

#include<stdio.h>
void test(int a, int b){
    a += 1;
    b *= 2;
    printf("test: a = %d, b = %d\n", a, b);
    return;
}
int main(){
    int a = 1, b = 2;
    test(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    test(b ,a);   // 按位匹配
    return 0;
}
