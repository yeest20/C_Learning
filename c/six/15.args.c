/*************************************************************************
	> File Name: 15.args.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 11:55:19 AM CST
 ************************************************************************/

#include<stdio.h>
// 宏定义可以传空参数
#define D_VAL(a, val) (#a[0] ? a : val)
#define test_func(a, b, c)\
__test_func(D_VAL(a, 97), D_VAL(b, 113), D_VAL(c, 150))


void __test_func(int a, int b, double c){
    printf("a = %d, b = %d, c = %.2lf\n", a, b, c);
}

int main(){
    test_func(,,);

    return 0;
}
