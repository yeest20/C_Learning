/*************************************************************************
	> File Name: 22.bit.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 27 Aug 2024 09:34:53 PM CST
 ************************************************************************/

#include<stdio.h>
struct A{
    unsigned int a:1;
    unsigned int b:2;
    unsigned int c:3;
};

int main(){
    printf("sizeof(A) = %lu\n", sizeof(struct A));
    struct A obj;
    obj.a = 13;
    obj.b = 13;
    obj.c = 13;
    printf("%d %d %d\n", obj.a, obj.b, obj.c);
    return 0;
}
