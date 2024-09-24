/*************************************************************************
	> File Name: 10.max.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 25 Aug 2024 01:33:18 PM CST
 ************************************************************************/

#include<stdio.h>

#define P(func){\
    printf("%s = %d\n", #func, func);\
}

#define MAX(a, b) ({\
    int __a = (a), __b = b;\
    ((__a) > (__b)? (__a) : (__b));\
})
int main(){
        P(MAX(2,MAX(3,4)));
        P(MAX(2, 3 > 4 ? 3 : 4));
        int a = 7;
        P(MAX(a++, 6));

    return 0;
}
