/*************************************************************************
	> File Name: 2.file_access.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 29 Aug 2024 10:15:58 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>

void r_access(){
    FILE *fp = fopen("output.txt", "r");
    if(fp == NULL){
        printf("ERROR, failed to open file...\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%[^\n]", s);
    printf("r mode:%s\n", s);
    fclose(fp);
    return;
}
void rand_file_name(char* file_name, int n){
    for(int i = 0; i < n; i++){
        file_name[i] = rand() % 26 + 'a';
    }
    file_name[n] = 0;
    strcat(file_name, ".txt");
    return;
}
void w_access(){
    char file_name[100];
    rand_file_name(file_name, 5);
    FILE *fp = fopen(file_name, "w");
    if(fp == NULL){
        printf("error...");
        exit(1);
    }
    fprintf(fp, "hahahaha, world...\n");
    fprintf(fp, "hello world...\n");

    fclose(fp);
    return;
}

void r_plus_access(){
    FILE *fp = fopen("output2.txt", "r+");
    if(fp == NULL){
        printf("ERROR\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%s", s);
    printf("r+ mode: %s\n", s); 
    fprintf(fp, "000000");
    fclose(fp);

    return;
}

void w_plus_access(){
    FILE *fp =fopen("output.txt", "w+");
    if(fp == NULL){
        printf("ERROR...\n");
        exit(1);
    }
    fprintf(fp, "hhhhhh\n");
    char s[100] = {0};
    fscanf(fp, "%s", s);
    printf("w+:%s\n", s);
    fclose(fp);
    return ;
}


int main(){
    srand(time(0));
    //r_access();
    //w_access();
    //r_plus_access();
    w_plus_access();
    return 0;
}
