/*************************************************************************
	> File Name: Test_scanf_printf.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 23 Jul 2024 02:36:52 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,b,c,d=0;
    int ret_scanf =  scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("ret_scanf=%d\nret_printf=%d\n",ret_scanf,\
          printf("%d,%d,%d,%d\n",a,b,c,d));
    printf("%d,%d,%d,%d\n",a,b,c,d);
    return 0;
}
