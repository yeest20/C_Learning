/*************************************************************************
	> File Name: hzoj137.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 06:23:06 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // hzoj137: 字母三角形
    int n;
    scanf("%d", &n);
    for(int i = n, flag = 0; i >= 1; i--){
        for(int j = 0; j < i; j++, flag++){
            printf("%c", 65 + flag);
        }
        printf("\n");
    }

    return 0;
}
