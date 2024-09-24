/*************************************************************************
	> File Name: 6.fscanf_fseek.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 09:41:40 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    FILE *fp = fopen("data5.txt", "r");
    int n;
    fseek(fp, 5, SEEK_SET);
    fscanf(fp, "%d", &n);
    printf("fscanf = %d\n", n);
    return 0;
}
