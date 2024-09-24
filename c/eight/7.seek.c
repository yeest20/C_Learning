/*************************************************************************
	> File Name: 7.seek.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 09:48:18 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    FILE *fp = fopen("data7.txt", "w");
    fprintf(fp, "0123456789");
    fseek(fp, -4, SEEK_CUR);
    fprintf(fp, "xy");
    fseek(fp, -7, SEEK_END);
    fprintf(fp, "z");
    
    return 0;
}
