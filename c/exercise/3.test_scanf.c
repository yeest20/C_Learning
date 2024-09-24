/*************************************************************************
	> File Name: 3.test_scanf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 04:42:24 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b;
    int n;
    //输入函数 scanf 
    //参数：
        //1. format 格式控制字符串 
        //2. ... 可变参数列表(给入的是地址,变量前加地址符&)
    //返回值：成功读入参数个数（无输入为-1/EOF）
    //输入参数间不带空格
    printf("normal scanf, input a, b:");
    n = scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\nscanf 返回值:%d\n", a, b, n);
   
    //scanf 格式化读入
    printf("format scanf, input a test b:");
    n = scanf("%d test %d", &a, &b);
    printf("a = %d, b = %d\nscanf 返回值:%d\n", a, b, n);

    //scanf 多次读入
    //没有读入的数据，返回值为-1（EOF）
    //linux从文件读入数据：.exe < input
    //手动输入文件末尾：ctrl+d
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);
    n = scanf("%d", &a);
    printf("n = %d\n",n);

    return 0;
}
