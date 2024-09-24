/*************************************************************************
	> File Name: 22.pointer_add_one.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 07:43:06 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    double a, *p = &a;
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("p + 1 = %p\n", p + 1);
    printf("p + 2 = %p\n", p + 2);
    printf("p + 3 = %p\n", p + 3);

    int arr[4] = {1, 2, 3, 4};
    int* p3 = arr;
    for(int i = 0; i < 4; i++){
        printf("p3 + %d = %p\n", i, p3 + i);
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    int (*p4)[10] = 0x0;
    int arr2[30][10];
    p4 = arr2;
    printf("p4 = %p\n", p4);
    printf("p4 = %p\n", p4 + 1);
    int* p5[10];
    int *(*p6[10])[20];
    return 0;
}
