/*************************************************************************
	> File Name: 2.test_printf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 04:30:54 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // 格式输出函数printf
    // 参数：1.format:格式控制字符串 2.... 可变参数列表
    // 返回值：输出字符数量
        // 换行符算一个字符
    int n1,n2;
    n1 = printf("Test printf...\n");
    int a = 1;
    n2 = printf("Test printf:%d...\n", a);
    printf("n1 = %d,n2 = %d\n", n1, n2);

    return 0;
}
