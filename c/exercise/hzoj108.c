/*************************************************************************
	> File Name: hzoj108.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 06 Aug 2024 11:01:51 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[10];
    double m, n;
    scanf("%s", s);
    scanf("%lf%lf", &m, &n);
    if(s[0] == 'r') printf("%.2lf\n", m * n);
    else if(s[0] == 't') printf("%.2lf\n", m * n / 2);

    return 0;
}
