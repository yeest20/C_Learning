/*************************************************************************
	> File Name: 10.while.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 27 Jul 2024 12:18:35 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //while 和 do while 循环
    int n, i = 0;
    printf("while:\n");
    scanf("%d",&n);
    while (i < n){
        i += 1;
        printf("%d ", i);
    }
    printf("\n");
    // 统计一个数字有几位
    printf("do while:\n");
    scanf("%d",&n);
    i = 0;
    do{
        n /= 10;
        i++;
    }while(n);
    printf("%d\n", i);

    return 0;
}
