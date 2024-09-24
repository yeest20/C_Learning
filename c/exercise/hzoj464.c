/*************************************************************************
	> File Name: hzoj464.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 20 Aug 2024 03:06:46 PM CST
 ************************************************************************/

#include<stdio.h>
int judge_leapYear(int x, int y){
    int result = 0;
    for(int i = x; i <= y; i++){
        if (i % 4 == 0 && i % 100 != 0) result += 1;
        if (i % 400 == 0) result += 1;
    }
    return result;
}

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", judge_leapYear(x, y));
    return 0;
}
