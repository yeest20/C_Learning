/*************************************************************************
	> File Name: 12.if_function.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 26 Aug 2024 10:28:10 PM CST
 ************************************************************************/

#include<stdio.h>
#ifdef CLOCK
void test1(){
    printf("This is test1...\n");
    return;
}
#endif
#ifdef PHONE
void test2(){
    printf("this is test2...\n");
    return;
}
#endif
int main(){
#ifdef CLOCK
    test1();
#endif

#ifdef PHONE
    test2();
#endif

    return 0;
}
