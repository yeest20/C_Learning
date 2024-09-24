/*************************************************************************
	> File Name: 1.test.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 12:57:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>    // 整型类型包

int main(){
    //整型
    int a = 123, b = 97,c, d;
    c = 100062;
    d = 9651;
    printf("%d %d %d %d\n", a, b, c, d);
    a = 2147483647; 
    printf("%d\n", a);
    printf("INT32_MIN = %d\n",INT32_MIN);
    printf("INT32_MAX = %d\n",INT32_MAX);
    // 长整型
    long long e;
    e = INT32_MAX + 1LL;
    printf("%lld\n",e);
    // 浮点型 
        // 有效位数
    float f = e + 0.1;
    double ff = e + 0.123456789;
        // .x 确定小数点后输出位数，默认6位
    printf("float:%.9lf\ndouble:%.9lf\n", f, ff);
    // 字符串操作  编码
    char g = 'a';
    printf("g = %c\n", g);
    printf("g = %d\n", g);
    printf("g + 5 = %c\n", g + 5);
    // long long 和 int 的格式占位符互换不会得到错误结果，但是别这样用
    e = 555;
    printf("%d\n", e);
    // 查看类型所占空间大小 sizeof
    // 格式占位符 lu:long undesigned 无符号长整型
    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(long long) = %lu\n", sizeof(long long));
    printf("sizeof(float) = %lu\n", sizeof(float));
    printf("sizeof(double) = %lu\n", sizeof(double));
    printf("sizeof(char) = %lu\n", sizeof(char));
    return 0;
}
