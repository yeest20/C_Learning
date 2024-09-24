/*************************************************************************
	> File Name: 9.string_cat.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 25 Aug 2024 11:31:18 AM CST
 ************************************************************************/

#include<stdio.h>

#define STR(n) #n
#define RUN(func) {func; printf("%s run done\n", #func);}

#define CAT(a, b) a##b
void test1(){
    printf("test1...\n");
    return;
}

void test2(int a, int b){
    printf("test2...:%d, %d\n", a, b);
}

int main(){
    printf("%s\n", STR(hello));
    RUN(test1());
    RUN(test2(2, 3));

    int n10 = 123, n11 = 456;
    CAT(n, 10) = 789;
    printf("n10 = %d, n11 = %d\n", n10, n11);
    return 0;
}
