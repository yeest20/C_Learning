/*************************************************************************
	> File Name: 13.goto.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 28 Jul 2024 11:23:15 PM CST
 ************************************************************************/

#include<stdio.h>
// goto测试
int main(){
    goto lab_1;
    printf("test goto1....\n");
lab_1:
    printf("test goto2....\n");
// 测试代码段中有变量定义
    goto lab_2;
    int a = 1, b = 2;
    scanf("%d%d", &a, &b);
lab_2:
    printf("%d\n", a * b);
    
    return 0;
}
