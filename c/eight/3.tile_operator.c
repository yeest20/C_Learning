/*************************************************************************
	> File Name: 3.tile_operator.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 29 Aug 2024 11:35:40 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *file_name = "data3.txt";
#define MAX_N 10000
#define cnt 10
int arr[MAX_N + 5];

void getArr(int* arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }
    return ;
}

void outputArr(int *arr, int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");     
    return;
}

void add_arr2file(int *arr, int n){
    FILE* fp = fopen("arr2file_a.txt","a");
    for(int i = 0; i < n; i++){
        fprintf(fp, "%d ", arr[i]);
    }
    fprintf(fp, "\n");
    fclose(fp);
    return;
}


void output_test(){
    srand(time(0));
    getArr(arr, cnt);
    outputArr(arr, cnt);
    add_arr2file(arr, cnt);
    return;
}

int read_file2arr(int* arr){
    int n = 0;
    FILE *fp = fopen("arr2file_a.txt", "r");
    if(fp == NULL) return 0;
    while(fscanf(fp, "%d", arr + n) != EOF) n += 1;


    fclose(fp);
    return n;
}

void read_test(){
    int n;
    n = read_file2arr(arr);
    printf("%d\n", n);
    outputArr(arr, n);
    return ;
}

void clear_file(){
    FILE *fp = fopen("arr2file_a.txt", "w");
    fclose(fp);
}



int main(){
    clear_file();

    return 0;
}
