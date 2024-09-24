/*************************************************************************
	> File Name: exgoto.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 29 Jul 2024 08:09:44 AM CST
 ************************************************************************/

#include<stdio.h>
// 用goto实现if else
int main(){
    int n;
    scanf("%d", &n);
    //短路原则 +（{}):给()内的语句返回值，返回值为最后一条语句
    n % 2 == 0 && ({goto if_stmt; 0;});
    !(n % 2) == 0 && ({goto else_stmt; 0;});
if_stmt:
    printf("n是偶数\n");
    goto if_end;
else_stmt:
    printf("n是奇数\n");
if_end:
    return 0;
}
