/*************************************************************************
	> File Name: 10.fwrite_fread.c
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Fri 30 Aug 2024 11:22:11 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int *arr, int n){
    printf("arr:");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return;
}

int main(){
    srand(time(0));
    #define MAX_N 10
    int arr[MAX_N];
    for(int i = 0; i < MAX_N; i++){
        arr[i] = rand() % 10000;
    }
    output(arr, MAX_N);

    FILE *fp = fopen("data10.dat", "wb");
    fwrite(arr, sizeof(int), MAX_N, fp); 
    fclose(fp);
    
    int arr_r[MAX_N];
    FILE *fp2 = fopen("data10.dat", "rb");
    fread(arr, sizeof(int), 10, fp);
    output(arr, MAX_N);
    fclose(fp);
    return 0;
}
