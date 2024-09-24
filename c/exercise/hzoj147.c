/*************************************************************************
	> File Name: hzoj147.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 22 Aug 2024 12:36:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char bigNum[10005];

int main(){
    scanf("%s", bigNum);
    if(bigNum[strlen(bigNum) - 1] % 2) printf("NO\n");
    else printf("YES\n");
    return 0;
}
