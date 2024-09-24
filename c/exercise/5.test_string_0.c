/*************************************************************************
	> File Name: 5.test_string_0.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 07:08:04 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char t[10];
    for(int i = 0;i < 10; i++) t[i] = -1;
    scanf("%s", t);
    for(int i = 0;i < 10; i++){
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}
