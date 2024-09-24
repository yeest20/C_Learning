/*************************************************************************
	> File Name: 23.pointer_get_value.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 11:09:45 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n = 0x61626364;
    char* p = (char*)&n;
    printf("n1 = %c\n", *p);
    printf("n2 = %c\n", *(p + 1));
    printf("n3 = %c\n", *(p + 2));
    printf("n4 = %c\n", *(p + 3));
    printf("n1 = %c\n", *p);
    printf("n2 = %c\n", p[1]);
    printf("n3 = %c\n", p[2]);
    printf("n4 = %c\n", p[3]);


    return 0;
}
