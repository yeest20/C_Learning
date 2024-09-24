/*************************************************************************
	> File Name: 6.terminal_output.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 06:59:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    freopen("/dev/pts/2", "w", stdout);
    char s[100];
    while(scanf("%s", s) != EOF){
        printf("%s", s);

    }
    return 0;
}
