/*************************************************************************
	> File Name: 11.for.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 28 Jul 2024 09:48:08 AM CST
 ************************************************************************/

#include<stdio.h>
// for 循环
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i += 1){
        printf("%d ", i + 1);
    }
    printf("\n");
    // 死循环写法
    //for(;;){}

    return 0;
}
