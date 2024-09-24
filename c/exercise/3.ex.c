/*************************************************************************
	> File Name: 3.ex.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Wed 24 Jul 2024 07:28:23 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    // 输入一行内容，输出带框的内容
    char s[100];
    scanf("%[^\n]", s);
    //1-计算上边沿长度
    int n = 0;
    char t[100];
    n = sprintf(t,"| %s |", s);
    //2-加上边框
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    //3-输出内容
    printf("%s\n", t);
    //4-输出下边框
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");

    return 0;
}
