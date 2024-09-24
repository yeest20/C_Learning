/*************************************************************************
	> File Name: 5.control_reopen.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 05:17:14 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[1000];
    int i = 1;

    while(scanf("%[^\n]", s) != EOF){
        getchar();
        fprintf(stderr, "%d test case\n", i++);
        printf("%s |hello world\n", s);

    }

    return 0;
}
