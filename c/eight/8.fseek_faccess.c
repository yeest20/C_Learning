/*************************************************************************
	> File Name: 8.fseek_faccess.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 10:01:07 AM CST
 ************************************************************************/

#include<stdio.h>
void r_plus_access(){
    FILE *fp = fopen("data5.txt", "r+");
    fseek(fp, 5, SEEK_SET);
    int n;
    fscanf(fp, "%d", &n);
    printf("r+:n = %d\n", n);
    fseek(fp, 6, SEEK_SET);
    fprintf(fp, "876");
    fclose(fp);
    return;
}

void w_plus_access(){
    FILE *fp = fopen("data8.txt", "w+");
    fprintf(fp,"hello world123456abc7890");
    fseek(fp, -4, SEEK_END);
    int n;
    fscanf(fp, "%d", &n);
    printf("r+:n = %d\n", n);
    fseek(fp, 12, SEEK_SET);
    fprintf(fp, "xyz");
    
    fclose(fp);
    return;
}

void add_plus_access(){
    FILE* fp = fopen("data8-2.txt", "a+");
    fprintf(fp, "1234567890");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "0987654321");
    fseek(fp, 0, SEEK_SET);
    int n;
    fscanf(fp, "%4d", &n);
    printf("a+: n = %d\n", n);
    fclose(fp);
    return;
}
int main(){
    //r_plus_access();
    //w_plus_access();
    add_plus_access();
    return 0;
}
