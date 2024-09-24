/*************************************************************************
	> File Name: HZoj_90.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 25 Jul 2024 10:51:21 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //输入一个整数a（100~999），输出百位数、十位数、个位数
    int a;
    scanf("%d", &a);
    printf("%d\n", a/100);
    printf("%d\n",  (a%100)/10);
    printf("%d\n",  (a%100)%10);
    
    //实现2：字符串
    char s[10];
    scanf("%s", s);
    printf("%c\n%c\n%c\n", s[0], s[1], s[2]);
    return 0;
}
