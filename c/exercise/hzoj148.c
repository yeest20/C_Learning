/*************************************************************************
	> File Name: hzoj148.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 12:42:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char s[55];
    scanf("%s", s);
    //printf("%lu\n", strlen(s));
    for(int i = strlen(s) - 1; i > -1; i--){
        printf("%c", s[i]);
    }
    printf("\n");
}
