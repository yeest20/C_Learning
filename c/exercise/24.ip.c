/*************************************************************************
	> File Name: 24.ip.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 23 Aug 2024 11:29:38 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    // 强制类型转换（）
    char* p = (char*)&n;
    p[3] = a;
    p[2] = b;
    p[1] = c;
    p[0] = d;
    printf("%u\n", n);
    

    return 0;
}
