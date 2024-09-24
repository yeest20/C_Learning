/*************************************************************************
	> File Name: 4.freopen.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 28 Aug 2024 04:38:44 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    freopen("output.txt", "w", stdout);
    printf("test freopen...\n");
    
    freopen("input.txt", "r", stdin);
    char s[1000];
    while(scanf("%[^\n]", s) != EOF){
        getchar();//从标准输入流读入一个字符
        printf("%s | hello world\n", s);
    }
    freopen("outputerr.txt", "w", stderr);
    perror("error...\n");
    return 0;
}
