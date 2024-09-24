/*************************************************************************
	> File Name: 5.fseek.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 09:34:46 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    FILE* fp = fopen("data5.txt", "w");
    printf("ftell(fp) = %ld\n", ftell(fp));
    fprintf(fp, "0123456789");
    printf("ftell(fp) = %ld\n", ftell(fp));
    fseek(fp, 2, SEEK_SET);
    printf("ftell(fp) = %ld\n", ftell(fp));
    fprintf(fp, "abc");
    printf("ftell(fp) = %ld\n", ftell(fp));
    return 0;
}
